#include <stdio.h>
#include <math.h>

int solve_quadratic(double a, double b, double c, double* px1, double* px2)
{
	double eps = 1e-10;
	double D = b * b - 4 * a * c;

	if (fabs(D) < eps)  // потому что число не целое
	{
		*px1 = -b / (2 * a);
		return 1;
	}
	if (D < 0)
		return 0;

	*px1 = (-b - sqrt(D)) / (2 * a);
	*px2 = (-b + sqrt(D)) / (2 * a);
	return 2;
}

int main()
{
	double a;
	double b;
	double c;
	scanf("%lf%lf%lf", &a, &b, &c);

	double x1;
	double x2;
	int roots = solve_quadratic(a, b, c, &x1, &x2);

	printf("roots = %i\n", roots);
	if (roots >= 1)
		printf("x1 = %f\n", x1);
	if (roots == 2)
		printf("x2 = %f\n", x2);
}