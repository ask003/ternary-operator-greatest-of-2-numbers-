#include <stdio.h>

int main()
{
    int a,b,max;
    printf("ENTER TWO NUMBERS: ");
    scanf("%d %d",&a,&b);
    max = a>b?a:b;
    printf("GREATEST OF TWO  UMBERS IS %d\n",max);

    return 0;
}
