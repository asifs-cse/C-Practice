#include<stdio.h>
int main(){
    FILE *demo;
    char display;

    demo = fopen("demo2.txt","w");
    fputc('a',demo);
    fclose(demo);
    return 0;
}