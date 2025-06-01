#include<stdio.h>
int main()
{
    long long int n,m,a,t,s;
    scanf("%lld %lld %lld",&n,&m,&a);
    if(n%a==0)
    {
        t = n/a;
    }
    else
    {
        t = ((n/a) + 1);
    }
    if(m%a==0)
    {
        s = m/a;
    }
    else
    {
        s = ((m/a) + 1);
    }
    printf("%lld\n",t*s);
    return 0;
}
