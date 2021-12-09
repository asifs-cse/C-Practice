#include<stdio.h>
int main(){
    FILE *fp;
    char ch;

    fp =fopen("readFile.c","r");
    while(1){
        ch = fgetc(fp);
        if (feof(fp))
        {
            break;
        }
        printf("%c",ch);
        
    }
    fclose(fp);
    return 0;
}