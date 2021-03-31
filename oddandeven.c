//Program to check whether no. is odd or even.
#include <stdio.h>//header file
int main()//main function 
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);//scanning number
    //checking condition
    if(num % 2 == 0)
        printf("%d is even.", num);//number is even
    else
        printf("%d is odd.", num);//number is odd

    return 0;
}