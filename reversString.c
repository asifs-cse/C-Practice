#include<stdlib.h>
#include<string.h>
void reversString(char *str){
    int l, i;
    char *begin_ptr, *end_ptr, ch;
    l = strlen(str);
    begin_ptr = str;
    end_ptr = str;

    for (i = 0; i < l-1; i++)
    {
        end_ptr++;
    }
    for (i = 0; i < l/2; i++)
    {
       ch = *end_ptr;
       *end_ptr = *begin_ptr;
       *begin_ptr = ch;

       begin_ptr++;
       end_ptr--;
    }
    
}
int main(){
    char str[100] = "Hello Asif";
    printf("Enter a string: %s",str);
    reversString(str);
    printf("\nRevers of the string: %s",str);
    return 0;
}