#include <stdio.h>

int main(){
    char operator;
    float val1, val2, res;// well we'll go for a vveeerryy simple calculator

    printf("Chose an operator: + - / x\n");
    scanf("%c", &operator);
    printf("Enter two values:\n");
    scanf("%f %f", &val1, &val2);

    switch(operator){
        case '+':
            res = val1 + val2;
            printf("%0.1f + %0.1f = %0.1f\n", val1, val2, res);
            break;

        case '-':
            res = val1 - val2;
            printf("%0.1f - %0.1f = %0.1f\n", val1, val2, res);
            break;

        case '/':
            res = val1 / val2;
            printf("%0.1f / %0.1f = %0.1f\n", val1, val2, res);
            break;

        case 'x':
            res = val1 * val2;
            printf("%0.1f x %0.1f = %0.1f\n", val1, val2, res);
            break;
    }
    return 0;
}