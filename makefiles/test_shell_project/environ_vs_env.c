#include <stdio.h>

extern char **environ;  // Declare extern char **environ to access the current environment

int main(int argc, char **argv, char **env) {
	// Print the addresses of env and environ
	printf("Address of env: %p\n", (void *)env);
	printf("Address of environ: %p\n", (void *)environ);

	// Check if env and environ have the same address
	if (env == environ) {
		printf("env and environ have the same address.\n");
	} else {
		printf("env and environ have different addresses.\n");
	}

	return 0;
}

