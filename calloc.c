#include<stdlib.h>
#include<stdio.h>
int main(){
    int n, i, *ptr, sum=0;
    printf("Enter number of element: ");
    scanf("%d",&n);
    ptr =(int*) calloc(n,sizeof(int));
    if(ptr ==NULL){
        printf("null");
        exit(0);
    }
    
    printf("Enter element :");
    for (i = 0; i < n; ++i)
    {   
        scanf("%d \n",ptr+i);
        sum +=*(ptr+i);
    }
    printf("%d",sum);
    free(ptr);
    
    return 0;
}