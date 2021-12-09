#include<stdio.h>
#include<conio.h>
int main(){
    FILE *demo;
    char display;
    demo = fopen("demo2.txt","r");
    while ((display=fgetc(demo)!=EOF))
    {
       printf("%c",display);
    } 
    
    fclose(demo);
    return 0;
}