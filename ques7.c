#include<stdio.h>
int palindrome(char b[]);
int main()
{
        char a[500];
        printf("Enter your string=");
        fgets(a,500,stdin);
        int i=palindrome(a);
        if(i==1)
            printf("String is Palindrome");
        else
            printf("String is not Palindrome");
        return 0;
}
int palindrome(char b[])
{
    int i,f=1,j;
    for(i=0,j=strlen(b)-2;i<j;i++,j--)
    {
        if(b[i]!=b[j])
            return 0;
    }
    return f;
}
