#include <stdio.h>
int main() {
    char s[1001];
    scanf("%s",s);
    int n,Palin = 1;
    for (n = 0;s[n]!=0; n++);
    {

    }
    for (int i=0;i<n/2;i++)
    {
        if (s[i]!=s[n-1-i])
        {
            Palin = 0;
            break;
        }
    }

    if (Palin)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
