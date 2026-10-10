#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main1()
{
    int a = 11;
    int b = 3;
    int x;
    float y;
    double z;
    x = a / b;
    y = a / b;
    z = a / b;

    printf("\n\nРезультат без преобразования типов:\n");
    printf("x = %d\n", x);
    printf("y = %f\n", y);
    printf("z = %lf\n", z);

    return 0;
    main2();

}

int main2()
{
    int a = 11;
    int b = 3;

    printf("\nРезультат с явным преобразованием типов:\n");
    printf("float: %f\n", (float)a / b);
    printf("double: %lf\n", (double)a / b);
    printf("Со скобками (float)(a / b): %f\n", (float)(a / b));

    return 0;
}