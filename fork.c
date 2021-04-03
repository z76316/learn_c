#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid;

    pid = fork();
    printf("pid1: %d\n", pid);

    pid = fork();
    printf("pid2: %d\n", pid);

    pid = fork();
    printf("pid3: %d\n", pid);

    return 0;
}
