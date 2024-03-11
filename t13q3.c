#include<stdio.h>
int max(int* , int*);
int max(int *num1 , int *num2)
{
    return (*num1 < *num2)? *num2:*num1;
}
int main()
{
    int num1 , num2;

    printf("enter num1 : ");
    scanf("%i",&num1);
    printf("enter num2 : ");
    scanf("%i",&num2);

    printf("max number form number %i and %i is : %i \n",num1,num2,max(&num1,&num2));
    return 0;
}