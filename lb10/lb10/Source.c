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
double factorial(int u)//сколько раз выполнитс€ факториал
{
	int b = 1;
	for (int i = 1; i <= u; i++)
	{
		b *= i;
	}
	return b;
}
double sin_n(double x, int N)
{
	x = x * M_PI / 180;
	double y = 0;
	for (int k = 1; k <= N; k++)
	{
		y += (pow(-1, (k - 1)) * pow(x,2*k-1))/factorial(2*k-1);
	}
	return y;
}
double sin_eps(double x, double eps) 
{
	x = x * M_PI / 180;
	double y = 0;
	int k = 1;
	while (fabs(y) > eps);
	{
		y += (pow(-1, (k - 1)) * pow(x, 2 * k - 1)) / factorial(2 * k - 1);
		k++;
	}
	return y;
}
double ln(double x, double n)
{
	double lnx = 0;
	for (int k = 0; k <= n; k++)
	{
		lnx += 2 * ((pow((x - 1), (2*k + 1))) / ((2*k+1)*pow((x+1),(2*k+1))));
	}
	return lnx;
}

void main()
{
	setlocale(LC_ALL, "RUS");
	int x,N,n,h;
	double o,eps;
	printf("¬ведите значение х:");
	scanf("%d", &x);
	printf("\nfa(x)=%lf , fb(x)=%lf ", fa(x), fb(x));
	printf("\nпроизведение:%lf, разность квадратов:%lf, :%lf", fa(x) * fb(x), pow(fa(x), 2) - pow(fb(x), 2), 2 * (fa(x) + fb(x)));

	printf("\nвведите х:");
	scanf("%lf", &o);
	printf("\n¬ведите число N - суммируемых k-x членов р€да:");
	scanf("%d",&N);
	printf("\nsinus %lf gradusov raven %lf", o, sinus(o));
	printf("\nsinus %lf gradusov po ryadu teylora raven %lf", o, sin_n(o,N));

	printf("\nведите точность:");
	scanf("%lf", &eps);
	printf("\nsinus %lf gradusov v sin_eps raven %lf", o, sin_eps(o, eps));

	printf("\nвведите число x и n:");
	scanf("%d%d", &h,&n);
	printf("\nln(x)=%lf",ln(h,n));
}