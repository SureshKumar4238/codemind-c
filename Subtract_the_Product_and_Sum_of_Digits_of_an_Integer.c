#include<stdio.h>
int main()
{                
    int N;           
    int r,t,sum=0,product=1;
    int result;
    scanf("%d",&N);
    while(N)
    {
        r=N%10;
        N=N/10;
        sum=sum+r;
        product=product*r;
    }
    printf("%d",product-sum);
}