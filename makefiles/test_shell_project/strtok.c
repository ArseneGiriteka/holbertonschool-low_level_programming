#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "This,is,a,sample,string";
    const char delimiters[] = ",";

    // Tokenize the string using strtok
    char *token = strtok(str, delimiters);

    // Print tokens
    while (token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, delimiters);
    }

    return 0;
}

