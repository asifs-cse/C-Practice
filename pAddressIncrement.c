#include<stdio.h>
int main(){
    int a=90;
    int *num=&a;
    printf("this variable address of: %x", num);
    printf("\nthis variable value of: %d", *num);

    return 0;
}