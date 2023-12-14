#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(void) {
	for (int i = 0; i < 5; i++) {
		pid_t child_pid = fork();

		if (child_pid == -1) {
			perror("Error creating child process");
			exit(EXIT_FAILURE);
		}

		if (child_pid == 0) {
			// Child process
			printf("Child %d (PID %u): Executing ls -l /tmp\n", i + 1, getpid());

			// Use execve to execute the 'ls' command
			char *command[] = {"ls", "-l", "/tmp", NULL};
			if (execve("/bin/ls", command, NULL) == -1) {
				perror("Error executing ls");
				exit(EXIT_FAILURE);
			}
		} else {
			// Parent process
			int status;
			waitpid(child_pid, &status, 0);

			if (WIFEXITED(status)) {
				printf("Child %d (PID %u) exited with status %d\n", i + 1, child_pid, WEXITSTATUS(status));
			} else {
				printf("Child %d (PID %u) exited abnormally\n", i + 1, child_pid);
			}
		}
	}

	return 0;
}
