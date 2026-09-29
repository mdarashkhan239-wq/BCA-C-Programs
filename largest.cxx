#include <stdio.h>
int main()
{
    int num1,num2,num3;
    printf("enter the number1=");
    scanf("%d", & num1);
    
    printf("\n enter the number2=");
    scanf("%d", & num2);
    
    printf("\n enter the number3=");
    scanf("%d", & num3);
    
    if(num1>=num2 && num1>=num3)
    printf("%d is the largest number", num1);
    
    else if(num2>=num3)
    printf("%d is the largest number", num2);
    
    else 
    printf("%d is the largest number", num3);
     return 0;
}