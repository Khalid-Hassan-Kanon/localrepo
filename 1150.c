#include <stdio.h>

int main()
{
    int a, b;

    // Input for 'a'
    scanf("%d", &a);

    // Loop to input 'b' such that 'a' is greater than or equal to 'b'
    for (int i = 0;; i++)
    {
        scanf("%d", &b);
        if (a < b)
        {
            break;
        }
    }

    int B = 0, c = 0;
    while (c < b)
    {
        c += a;
        a++;
        B++;
    }

    printf("%d\n", B);

    return 0;
}
