#include<stdio.h>
int main(){
    FILE *demo;
    char text[300];
    demo =fopen("demo_file.txt","r");
    printf("%s",fgets(text,200,demo));
    return 0;
}