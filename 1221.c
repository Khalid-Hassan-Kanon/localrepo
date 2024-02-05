#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        long long a;
        scanf("%lld", &a);

        if (a == 0 || a == 1)
        {
            printf("Not Prime\n");
            continue;
        }

        if (a == 2)
        {
            printf("Prime\n");
            continue;
        }

        int te = 0;
        for (int j = 2; j <= sqrt(a); j++) // Change loop condition to <= sqrt(a)
        {
            if (a % j == 0)
            {
                te++;
                if (te == 2)
                    break;
            }
        }

        if (te >= 1)
            printf("Not Prime\n");
        else
            printf("Prime\n");
    }

    return 0;
}
