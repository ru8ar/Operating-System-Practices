//VIRTUALIZING THE CPU

#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <assert.h>
#include "common.h"

/* " gcc -o cpu cpu.c -Wall" use this command to compile it and then you can run the program with this command ->  ./cpu "A"   
*/

int main(int argc, char *argv[])
{
    if(argc != 2){
        fprintf(stderr, "usage: cpu <string>\n");
        exit(1);
    }
    char *str = argv[1];
    while (1) {
        Spin(1);
        printf("%s\n", str);
    }
    return 0;
}
