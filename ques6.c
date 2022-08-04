#include<stdio.h>
int alpha(char b[]);
int main()
{
        char a[500];
        printf("Enter your string=");
        fgets(a,500,stdin);
        int i=alpha(a);
        if(i==1)
            printf("String is Alphanumeric");
        else
            printf("String is not a Alphanumeric");
        return 0;
}
int alpha(char b[])
{
    int i,f1=0,f2=0,f3=0;
    for(i=0;b[i];i++)
    {
        if(b[i]>=48&&b[i]<=57)
           f1=1;
        else if((b[i]>64&&b[i]<91)||((b[i]>96&&b[i]<123)))
            f2=1;

    }
    if(f1==1&&f2==1)
        return 1;
    return 0;
}
