#include <stdio.h>
int main()
{
    int i;
    if (printf("1"))
    {
        i = 3;
    }
    else
    {
        i = 5;
    }
    printf("%d", i);
    return 0;
}
