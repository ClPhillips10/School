#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, char* argv[]){
    FILE *fp = fopen(argv[1], "r");
    if(fp == NULL)
    {
    printf("COuld not open file\n");
    return 3;
    }
    while(1){
        char c; 
        fscanf(fp,"%c", &c)

    }
    return 0;
}