#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int option;
	while (1)
	{
		printf("Enter option: ");
		scanf("%d", &option);
		if (option == 1 || option == 2)
			break;
		printf("Try again!\n");
	}
	double x1, x2, delta, f;
	int n;
	if (option == 1)
	{
		printf("Input x1, x2, n: ");
		scanf("%lf%lf%d", &x1, &x2, &n); getchar();
		delta = (x2 - x1) / n;
	}
	else
	{
		printf("Input x1, x2, delta: ");
		scanf("%lf%lf%lf", &x1, &x2, &delta); getchar();
		n = (x2 - x1) / delta;
	}
	printf("+-----+----------+----------+\n");
	printf("|  N  |    X     |   F(X)   |\n");
	printf("+-----+----------+----------+\n");
	for (int i = 1; i < n + 1; i++)
	{
		f = x1 * x1 * x1 * x1 - 5 * x1 * x1 * x1 - 0.25 * x1 * x1 + 2;
		printf("|%5d|%10.2lf|%10.2lf|\n", i, x1, f);
		printf("+-----+----------+----------+\n");
		if (i % 10 == 0 && i != n)
		{
			getc(stdin);
			printf("+-----+----------+----------+\n");
		}
		x1 += delta;
	}
}
