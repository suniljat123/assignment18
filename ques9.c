#include<stdio.h>
void wrev(char b[]);
int main()
{
        char a[500];
        printf("Enter your string=");
        fgets(a,500,stdin);
        wrev(a);
        printf("Words of String in reverse order=%s",a);
        return 0;
}
void wrev(char b[])
{
    int i,j,cnt=0,l,p=0,k=0,m;
    char temp,c[500],d[500];
    for(i=0;b[i];i++)
    {
        if(b[i]==32&&b[i+1]==32)
        {
            b[i]=b[i+1];
        }
    }
    for(i=0,j=strlen(b)-2;i<j;i++,j--)
    {
        temp=b[i];
        b[i]=b[j];
        b[j]=temp;
    }
    for(i=0;b[i];i++)
    {
        if(b[i]!=32&&b[i]!='\n')
        {
            c[k]=b[i];
            k++;
        }
        if(b[i]==32||b[i]=='\n')
        {
            c[k]='\0';
            for(l=0,m=strlen(c)-1;l<m;l++,m--)
            {
                temp=c[l];
                c[l]=c[m];
                c[m]=temp;
            }
            for(l=0;c[l];l++)
            {
                b[p]=c[l];
                p++;
            }
            b[p]=32;
            p++;
            k=0;
        }

    }
}
