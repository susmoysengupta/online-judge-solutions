#include<stdio.h>
int main()
{
	double a,b;
	scanf("%lf%lf",&a,&b);
	printf("%.2lf%%\n",((b-a)/a)*100.00);
	return 0;
}
