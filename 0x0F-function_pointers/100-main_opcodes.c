#include <stdio.h>
#include <stdlib.h>

void print_opcodes(unsigned char *ptr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%02x", ptr[i]);
        if (i < size - 1)
            printf(" ");
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Error\n");
        return 1;
    }

    int num_bytes = atoi(argv[1]);
    if (num_bytes < 0) {
        printf("Error\n");
        return 2;
    }

    unsigned char *ptr = (unsigned char *)main;
    print_opcodes(ptr, num_bytes);

    return 0;
}

