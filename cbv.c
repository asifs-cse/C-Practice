#include<stdio.h>
int cbv(int *x, int *y){
    *x=20;
    *y=10;
}
int main(){
    int x=10,y=20;
    cbv(&x,&y);
    printf("x =%d and y =%d",x,y);
    return 0;
}