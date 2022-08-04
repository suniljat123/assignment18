#include<stdio.h>
void rev(char b[]);
int main()
{
        char a[50],*i;
        printf("Enter your string=");
        fgets(a,50,stdin);
        rev(a);
        printf("String in reverse order=%s",a);
        return 0;
}
void rev(char b[])
{
    int i,j;
    char temp;
    for(i=0,j=strlen(b)-1;i<j;i++,j--)
    {
        temp=b[i];
        b[i]=b[j];
        b[j]=temp;
    }
}
