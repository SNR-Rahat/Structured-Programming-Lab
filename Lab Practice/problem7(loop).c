#include<stdio.h>
int main()
{
    int number,sum=0,i;
    printf("Enter five digit: ");
    scanf("%d",&number);
    for(i=number;i!=0;i=i/10){
        sum=sum+(i%10);
    }
    printf("Sum is= %d",sum);
    return 0;
}
