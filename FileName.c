#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "ru_RU.UTF-8");
	char c = '!';
	int i = 2;
	float f = 3.14f;
	double d = 5e-12;
	printf("%c,\n%d,\n%f,\n%le", c, i, f, d);

	main1();

	main2();

	main3();
}