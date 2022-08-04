#include<stdio.h>
int cmp(char b[],char c[]);
int main()
{
        char a[500],b[500];
        printf("Enter your A string=");
        fgets(a,500,stdin);
        printf("Enter your B string=");
        fgets(b,500,stdin);
        int i=cmp(a,b);
        if(i==1)
            printf("String A is greater");
        else if(i==2)
            printf("Both strings are same");
        else
            printf("String B is greater");
        return 0;
}
int cmp(char b[],char c[])
{
    int i,j;
    for(i=0;b[i];i++);
    for(j=0;c[j];j++);
    if(j<i)
        return 1;
    if(i==j)
        return 2;
    return 0;
}
