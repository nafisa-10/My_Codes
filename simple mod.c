#include <stdio.h>
#include <math.h>
int main()
{
    long long N,x,y;
    scanf("%lld", &N);
    for (x = 0; x <= N; x++)
    {
        for (y = 0; y <= N; y++)
        {
           if ((x * x + y * y) % N == 0)
            {
               printf("%lld %lld\n",x,y);
            }
            return 0;
        }
    }
    return 0;
}
