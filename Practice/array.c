// array declaration,initialization,body

#include<stdio.h>
int main()
{
    int num[5]= {10,20,30,40,50},sum=0,i;
    float avg;
    for(i=0; i<=4; i++)
    {
        sum=sum+num[i];
        avg=sum/5;
    }
    printf("The sum is: %d\n",sum);
    printf("The avg is: %0.2lf\n",avg);
    return 0;
}
