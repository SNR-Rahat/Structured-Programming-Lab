#include<stdio.h>
int main()
{
    int num1,num2,value;
    num2=1;
    printf("Please enter a number: ");
    scanf("%d", &num1);

    value=num1+num2;
    printf("%d+%d=%d\n", num1,num2, value);
    value=num1-num2;
    printf("%d-%d=%d\n", num1,num2, value);
    value=num1*num2;
    printf("%d*%d=%d\n", num1,num2, value);
    value=num1/num2;
    printf("%d/%d=%d\n", num1,num2, value);

    return 0;
}
