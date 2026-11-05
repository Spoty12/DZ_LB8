#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "RUS");

    int n;
    double x, s = 0, term;

    printf("¬ведите натуральное число n: ");
    scanf("%d", &n);

    printf("¬ведите действительное число x: ");
    scanf("%lf", &x);

    term = x;

    for (int i = 1; i <= n; i++)
    {
        term = sin(term);
        s += term;
    }

    printf("–езультат S = %.6lf\n", s);

    return 0;
}