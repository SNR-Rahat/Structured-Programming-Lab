#include<stdio.h>
int main()
{
    int sum,number,a,b,c,d,d1,d2,d3,d4,d5;
    printf("Enter five digit number: ");
    scanf("%d",&number);
    d1=number%10;
    a=number/10;
    d2=a%10;
    b=a/10;
    d3=b%10;
    c=b/10;
    d4=c%10;
    d=c/10;
    d5=d%10;

    sum=d1+d2+d3+d4+d5;
    printf("Sum is= %d",sum);
    return 0;
}
