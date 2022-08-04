#include<stdio.h>
void repeat(char b[]);
int main()
{
        char a[500];
        printf("Enter your string=");
        fgets(a,500,stdin);
        repeat(a);
        return 0;
}
void repeat(char b[])
{
    int i,f,j;
    printf("Characters which are repeat are=");
    for(i=0;b[i];i++)
    {   f=0;
        for(j=i+1;b[j];j++)
        {
            if(b[i]==b[j])
            {
                f=1;
                b[j]=-1;
            }
        }
        if(f==1&&b[i]!=-1&&b[i]!='\n')
            printf("%c ",b[i]);
    }
}
