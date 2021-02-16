#include<stdio.h>
int main()
{
    int t1=0,t2=1,t3,n;
    printf("enter the number of terms for which the Fibonacci sequence is to be determined\n");
    scanf("%d",&n);

    printf("%d %d ",t1,t2);
    while(n>2)
    {
        t3=t1+t2;
        printf("%d ",t3);
        t1=t2;
        t2=t3;
        n--;
    }
    return 0;
}