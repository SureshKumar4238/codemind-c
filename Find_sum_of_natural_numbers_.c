#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int i,sum=0;
    for(i=0;i<=N;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
}