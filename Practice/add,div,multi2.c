#include<stdio.h>
int main()
{
    double num1,num2,value;
    printf("Please enter a number: ");
    scanf("%lf", &num1);
    printf("Please enter another number: ");
    scanf("%lf", &num2);
    value=num1+num2;
    printf("%0.2lf+%0.2lf=%0.2lf\n", num1,num2, value);
    value=num1-num2;
    printf("%0.2lf-%0.2lf=%0.2lf\n", num1,num2, value);
    value=num1*num2;
    printf("%0.2lf*%0.2lf=%0.2lf\n", num1,num2, value);
    value=num1/num2;
    printf("%0.2lf/%0.2lf=%0.2lf\n", num1,num2, value);

    return 0;
}
