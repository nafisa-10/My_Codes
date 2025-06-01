#include<stdio.h>.
int main()
{
    double x,p;
    scanf("%lf %lf",&x,&p);
    double og = p/(1-(x/100));
    printf("%0.2lf\n",og);
    return 0;
}
