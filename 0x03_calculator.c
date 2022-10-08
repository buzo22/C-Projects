 #include <stdio.h>

 // a basic Calculator program in C

int main()
{
    int num1,num2;
    float result;
    char operator;   
     
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
     
    printf("Choose operation to perform (+,-,*,/,%%): ");
    scanf(" %c",&operator);
     
    result = 0;
    switch(operator)    
    {
        case '+':
            result=num1+num2;
            break;
             
        case '-':
            result=num1-num2;
            break;
         
        case '*':
            result=num1*num2;
            break;
             
        case '/':
            result=(float)num1/(float)num2;
            break;
             
        case '%':
            result=num1%num2;
            break;
        default:
            printf("Invalid operation.\n");
    }
 
    printf("Result: %d %c %d = %.2lf\n",num1,operator,num2,result);
    return 0;
}
