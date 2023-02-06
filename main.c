#include <stdio.h>

int main()
{
    double num1, num2;
    char op;

    printf("Введите первое число: ");
    scanf("%lf", &num1);
    printf("Введите оператор (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Введите второе число: ");
    scanf("%lf", &num2);

    if (op == '+')
        printf("%.1lf + %.1lf = %.1lf", num1, num2, num1 + num2);
    else if (op == '-')
        printf("%.1lf - %.1lf = %.1lf", num1, num2, num1 - num2);
    else if (op == '*')
        printf("%.1lf * %.1lf = %.1lf", num1, num2, num1 * num2);
    else if (op == '/')
        printf("%.1lf / %.1lf = %.1lf", num1, num2, num1 / num2);
    else
        printf("Неверный оператор!");

    return 0;
}