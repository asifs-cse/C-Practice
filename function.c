#include<stdio.h>
int even_odd(int);
int main(){
    int n;
    printf("\nGoing to check whether a number is even or odd: ");
    printf("\nEnter the number: ");
    scanf("%d",&n);
    
    if (even_odd(n)) printf("\nThe number is even");
    else printf("\nThe number is odd");

    return 0;
}
int even_odd(int n){
    if(n%2==0) return 1;
    else return 0;
}