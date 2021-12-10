#include<stdio.h>
int main(){
    int *num=100;
    printf("this variable address of: %x", num+1);
    printf("\nthis variable value of: %d", num);

    return 0;
}