#include<stdio.h>
void ucase(char b[]);
int main()
{
        char a[500];
        printf("Enter your string=");
        fgets(a,500,stdin);
        ucase(a);
        printf("String in uppercase=%s",a);
        return 0;
}
void ucase(char b[])
{
    int i;
    for(i=0;b[i];i++)
    {
        if(b[i]>65&&b[i]<90)
            b[i]+=32;
    }
}
