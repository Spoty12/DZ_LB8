#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "RUS");

    int n;
    double x, s = 0, term;

    printf("Ââåäèòå íàòóðàëüíîå ÷èñëî n: ");
    scanf("%d", &n);

    printf("Ââåäèòå äåéñòâèòåëüíîå ÷èñëî x: ");
    scanf("%lf", &x);

    term = x;

    for (int i = 1; i <= n; i++)
    {
        term = sin(term);
        s += term;
    }

    printf("Ðåçóëüòàò S = %.6lf\n", s);

    return 0;
}
