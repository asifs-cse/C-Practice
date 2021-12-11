#include<stdio.h>
int reversDigits(int num){
    int rev_num = 0;
    while (num>0)
    {
        rev_num = rev_num*10+num%10; //rev
        num = num/10; //reminder
    }
    return rev_num;
}
int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    printf("Revers of no. is: %d",reversDigits(num)); //receive data
    return 0;
}