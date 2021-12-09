#include<stdio.h>
int main(){
    FILE *demo;
    char text[255];
    demo = fopen("demo_file.txt", "r");
    while (fscanf(demo,"%s", text)==1)
    {
        printf("\n%s",text);
    }
    fclose(demo);
    return 0;
}