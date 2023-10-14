#include <stdio.h>

int main(){
    char operator;
    float val1, val2;// well we'll go for a vveeerryy simple calculator

    printf("Chose an operator: + - / x\n");
    scanf("%c", &operator);
    printf("Enter two values:\n");
    scanf("%f %f", &val1, &val2);

    switch(operator){
        case '+':
            float res = val1 + val2;
            printf("%0.1f + %0.1f = %0.1f\n", val1, val2, res);
            break;

        case '-':
            float resu = val1 - val2;
            printf("%0.1f - %0.1f = %0.1f\n", val1, val2, resu);
            break;

        case '/':
            float resul = val1 / val2;
            printf("%0.1f / %0.1f = %0.1f\n", val1, val2, resul);
            break;

        case 'x':
            float result = val1 * val2;
            printf("%0.1f x %0.1f = %0.1f\n", val1, val2, result);//shh you didnt see anything weird fix but its a fix
            break;
    }
    return 0;
}