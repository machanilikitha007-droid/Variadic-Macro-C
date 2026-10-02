#include <stdio.h>

#define PRINT_NUMBERS(...) printf(__VA_ARGS__)

int main()
{
    printf("Variadic Macro Example\n");

    PRINT_NUMBERS("Marks: %d\n", 85);
    PRINT_NUMBERS("Age: %d\n", 20);
    PRINT_NUMBERS("Total: %d\n", 105);

    return 0;
}
