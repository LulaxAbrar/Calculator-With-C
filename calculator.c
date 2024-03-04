#include<stdio.h>
int main(){
char operator;
double num1,num2,result;

printf("\nEnter an operator (+ - * /):");
scanf("%c",&operator);

printf("Enter number1:");
scanf("%lf",&num1);

printf("Enter number2:");
scanf("%lf",&num2);

switch(operator){
    case'+':
    result= num1+num2;
    printf("\nresuult:%.2lf",result);
    break;
    case'-':
    result= num1-num2;
    printf("\nresuult:%.2lf",result);
    break;
    case'*':
    result= num1*num2;
    printf("\nresuult:%.2lf",result);
    break;
    case'/':
    result= num1/num2;
    printf("\nresuult:%.2lf",result);
    break;
    default:
        printf("%c is not valid",operator);

}

return 0;
}
