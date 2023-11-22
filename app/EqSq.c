#include "EqSq.h"
#include "math.h"
#include <stdio.h>
#include <stdlib.h>

int roots(double a, double b, double c)
{
    double D;

    if (a == 0.0 && b == 0.0 && c == 0.0)
        return -1;
    else
    {
        if (a == 0.0)
        {
            if (b == 0.0)
                return -1;



            return 1;
        }
        else
        {
            D = b * b - 4.0 * a * c;

            if (D < 0.0)
                return 0;
            else
            {
                if (D == 0.0)
                {


                    return 1;
                }
                else
                {


                    return 2;
                }
            }
        }
    }
}
