#include<stdio.h>
int main()
{
    long long int e,m,b,min=0;
    scanf("%lld %lld %lld",&e,&m,&b);
    if(e<=m && e<=b)
    {
        min = e;
    }
    else if(m<=e && m<=b)
    {
        min = m;
    }
    else
    {
        min = b;
    }
    long long int ne,nm,nb;
    ne = (e - min)/2;
    nm = m - min;
    nb = b - min;
    if(ne <= nb)
    {
        printf("%lld",ne + min);
    }
    else
    {
        printf("%lld",nb + min);
    }
    return 0;

}