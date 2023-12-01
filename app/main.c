#include <stdio.h>
#include "EqSq.h"


int main()
{
    float root1, root2;

     roots(4, 10, 1, &root1, &root2);

     int g = root1;
     int g2 = root2;
    printf("Корни уравнения: %d и %d\n", g, g2);
    printf("Hello World!\n");
    return 1;
}
