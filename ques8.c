#include<stdio.h>
int wcnt(char b[]);
int main()
{
        char a[500];
        printf("Enter your string=");
        fgets(a,500,stdin);
        int i=wcnt(a);
        printf("Number of words in string=%d",i);
        return 0;
}
int wcnt(char b[])
{
    int i,cnt=0;
    for(i=0;b[i];i++)
    {
        if(((b[i+1]==32)&&(b[i]!=32))||(b[i]=='\n'))
            cnt++;
    }
    return cnt;
}
