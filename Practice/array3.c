//Getting user input not declared


#include<stdio.h>
int main()
{
    int num[100],sum=0,i,n;
    float avg;
    printf("How many digit:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=1; i<=n; i++)
    {
        sum=sum+num[i];
        avg=sum/n;
    }
    printf("The sum is: %d\n",sum);
    printf("The avg is: %0.2lf\n",avg);
    return 0;
}
