#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        printf("Usage: ./cmd <operation> <num1> <num2>\n");
        printf("Operations: add, sub, mul, div\n");
        return 1;
    }

    char *op = argv[1];
    long a = strtol(argv[2], NULL, 10);
    long b = strtol(argv[3], NULL, 10);

    if (strcmp(op, "add") == 0)
        printf("%ld\n", a + b);
    else if (strcmp(op, "sub") == 0)
        printf("%ld\n", a - b);
    else if (strcmp(op, "mul") == 0)
        printf("%ld\n", a * b);
    else if (strcmp(op, "div") == 0)
    {
        if (b == 0)
        {
            printf("Error: division by zero\n");
            return 1;
        }
        printf("%ld\n", a / b);
    }
    else
        printf("Unknown operation\n");

    return 0;
}
