#include<stdlib.h>
#include<stdlib.h>
int main(){
    int n,i,*ptr,sum=0;
    printf("Enter number of element: ");
    scanf("%d",&n);
    ptr =(int*)malloc(n*sizeof(int));  //memory allocated using malloc  

    if (ptr==NULL)
    {
        printf("Sorry! unable to allocate memory");
        exit(0);
    }
    
    printf("Enter element of arry: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d",ptr+i);
        sum +=*(ptr+i);
    }
    printf("%d",sum);
    free(ptr);
    
    return 0;
}