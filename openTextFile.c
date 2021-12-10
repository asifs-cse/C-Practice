#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *demo;
    char file_name[100],c;
    printf("Enter the file name to open: ");
    scanf("%s",&file_name);

    demo = fopen(file_name, "r");
    if (demo == NULL)
    {
        printf("File not found");
        exit(0);
    }
    c = fgetc(demo);
    while (c != EOF)
    {
        printf("%c",c);
        c = fgetc(demo);
    }
    fclose(demo);
    
    return 0;
}