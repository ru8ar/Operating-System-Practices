#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "common.h"


//A PROGRAM THAT ACCESSES MEMORY

int main(int argc, char *argv[])
{
    int *p = malloc(sizeof(int));
    assert (p != NULL);
    printf ("(%d) address pointed to by p: %p\n", getpid(), p);
    *p = 0;
    while (1)
    {
        Spin(1);
        *p = *p+1;
        printf("(%d) p: %d   , the address: %p\n", getpid(), *p, p);
    }
    return 0;
    
}

// *p -> represents the variable located at address p in memory and we change these variables.
// The address does not change.
