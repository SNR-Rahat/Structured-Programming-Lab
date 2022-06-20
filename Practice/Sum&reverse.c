#include<stdio.h>
int main()
{
    int number,r,sum=0,reverse=0;
    printf("Enter six digit number: ");
    scanf("%d",&number);
    while(number>0)
    {
        r=number%10;
        //printf("%d",r);
        reverse=reverse*10+r;
        sum=sum+r;
        number=number/10;

    }
    printf("The sum is: %d\n",sum);
    printf("Reverse: %d",reverse);
    return 0;
}
