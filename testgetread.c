#include "types.h"
#include "user.h"

// User program to print the current read system call count
int main(void)
{
    printf(1, "Read count: %d\n", getreadcount());
    exit();
}
