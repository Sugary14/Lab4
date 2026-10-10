#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main3()
{
    int n;

    printf("\n\nВведите целое трехзначное число: ");
    scanf("%d", &n);

    if (n < 100 || n > 999) {
        printf("Ошибка: Вы ввели не трехзначное число!\n");
        return 1;
    }

    int last_digit = n % 10;
    int first_digit = n / 100;
    int middle_digit = (n / 10) % 10;

    int sum_digits = first_digit + middle_digit + last_digit;

    int reversed_n = last_digit * 100 + middle_digit * 10 + first_digit;

    
    printf("Последняя цифра: %d\n", last_digit);
    printf("Первая цифра: %d\n", first_digit);
    printf("Сумма цифр: %d\n", sum_digits);
    printf("Число наоборот: %d\n", reversed_n);

    return 0;
}