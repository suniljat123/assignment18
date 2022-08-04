#include<stdio.h>
int length(char b[]);
int main()
{
        char a[50];
        int i;
        printf("Enter your string=");
        fgets(a,50,stdin);
        i=length(a);
        printf("length of string=%d",i);
        return 0;
}
int length(char b[])
{
    int i;
    for(i=0;b[i];i++);
    return i-1;
}
