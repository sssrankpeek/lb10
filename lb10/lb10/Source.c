#include <stdio.h>
#include <locale.h>
#include<math.h>
#define M_PI 3.14159265358979323846
double fa(double x)
{
	double y;
	if (x <= 3)
	{
		y = pow(x, 2) + 3 * x + 9;
	}
	else
	{
		y = 1 / (pow(x, 3) + 3);
	}
	return y;
}
double fb(double x)
{
	double y;
	y = x * exp(sin(pow(x, 2)));
}
double sinus(double o)
{
	double q;
	o = o * M_PI / 180;
	q = sin(o);
	return q;
}
void main()
{
	setlocale(LC_ALL, "RUS");
	int x;
	double o;
	printf("¬ведите значение х:");
	scanf("%d", &x);
	printf("\nfa(x)=%lf , fb(x)=%lf ", fa(x), fb(x));
	printf("\nпроизведение:%lf, разность квадратов:%lf, :%lf", fa(x) * fb(x), pow(fa(x), 2) - pow(fb(x), 2), 2 * (fa(x) + fb(x)));

	printf("\nвведите х:");
	scanf("%lf", &o);
	printf("sinus %lf gradusov raven %lf", o, sinus(o));
}