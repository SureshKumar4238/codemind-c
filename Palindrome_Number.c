#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    int i,a,r,k,ph=0,rev=0;
    for(i=1;i<=T;i++)
    {
        scanf("%d",&a);
        k=a;
        while(a)
        {
            r=a%10;
            a=a/10;
            rev=rev*10+r;
        }
        if(k==rev)
        {
            printf("True
");
        }
        else
        printf("False
");
        rev=0;
    }
}