#include<stdio.h>
int main(){
    FILE *demo;
    demo = fopen("demo_file.txt","w+");
    fprintf(demo, "%s %s %s","Welcome Asif", "your are ", "Right");
    fclose(demo);
    return 0;
}