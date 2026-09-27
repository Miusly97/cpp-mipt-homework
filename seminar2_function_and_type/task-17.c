#include <stdio.h>
int main()
{	double x1, y1, r1;
	double x2, y2, r2;
	scanf("%lf%lf%lf", &x1, &y1, &r1);
	scanf("%lf%lf%lf", &x2, &y2, &r2);

	double dx = x2 - x1;
	double dy = y2 - y1;
	double d2 = dx*dx + dy*dy;      

	double sum = r1 + r2;
	double sum2 = sum * sum;        

	double diff = r1 - r2;
	if (diff < 0) diff = -diff;     
	double diff2 = diff * diff;    

	double t1 = d2 - sum2;
	if (t1 < 0) t1 = -t1;           

	double t2 = d2 - diff2;
	if (t2 < 0) t2 = -t2;           

	double epsilon = 1e-6;

	if (t1 < epsilon || t2 < epsilon)
		printf("Touch");
	else if (d2 < sum2 && d2 > diff2)
		printf("Intersect");
	else
		printf("Do not intersect");
}
