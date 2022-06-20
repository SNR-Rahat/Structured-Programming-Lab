// Getting user input


#include<stdio.h>
int main()
{
    int num[5],sum=0,i;
    float avg;
    printf("Enter five digit: ");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&num[i]);// you can't used space and new line in scanf
    }
    for(i=0; i<=4; i++)
    {
        sum=sum+num[i];
        avg=sum/5;
    }
    printf("The sum is: %d\n",sum);
    printf("The avg is: %0.2lf\n",avg);
    return 0;
}
