// write a program that can take some number and display maximum


#include<stdio.h>
int main()
{
    int num[100],max,i,n,min;
    printf("How many number: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }
    max=num[0];
    min=num[0];
    for(i=1; i<n; i++)
    {
        if(max<num[i])
        {
            max=num[i];

        }
        else if(min>num[i])
        {
            min=num[i];
        }


    }
    printf("The maximum is: %d\n",max);
    printf("The minimum is: %d\n",min);
    return 0;

}
