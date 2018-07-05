#include<stdio.h>

void permutate(char* , int , int)
void swap(char* , char*)

int main()
{
    char A='a' , B='b';
    swap(A,B);
    printf("%c  %c",A,B);
    return 0;


}

void permutate(char str[] , int start , int end)
{
    int range = end - start;
    if(range==1) printf("%s\n",str);

    for(int i=0;i<range;++i)
    {
        swap(&str[start] , &str[start+1])
        permutate(str , start+1 , end);
        swap(&str[start] , &str[start+1]);
    }
}

void swap (char *a , char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}