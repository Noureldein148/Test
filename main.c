#include <stdio.h>
#include <stdlib.h>
#include "gg.h"
int main()
{
    int x,y,sum;
    x=20; y=25;
    sum=sum_V(x,y);
    printf("Sum of %d and %d = %d",x,y,sum);
    return 0;
}
