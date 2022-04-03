#include <stdio.h>

int main() {
    FILE *fd1 = fopen("out.txt", "w");
    FILE *fd2 = fopen("out.txt", "w");

    for (char c = 'a'; c <= 'z'; c++)
    {
        if (c % 2)
            fprintf(fd1, "%c", c);
        else
            fprintf(fd2, "%c", c);
    }
    printf("\n");

    fclose(fd1);
    fclose(fd2);
    return 0;
}