#include <stdio.h>
#include <math.h>


int main()
{
    double a;
    double z1;
    double z2;
    const double PI = 3.141592653589793;
    scanf("%lf", &a);
    z1 = cos(a) + sin(a) + cos(3*a) + sin(3*a);
    z2 = 2*sqrt(2)*cos(a) * sin((PI/4)+2*a);
    printf("%.2f\n", z1);
    printf ("%.2f", z2);
    return 0;
}
