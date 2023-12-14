#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t pid;
	pid_t ppid;

	pid = getpid();
	ppid = getppid();
	printf("pid : %u\nppid : %u\n", pid, ppid);
	return (0);
}
