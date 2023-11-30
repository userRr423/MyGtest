#include "EqSq.h"
#include "math.h"
#include <stdio.h>
#include <stdlib.h>

int roots(double a, double b, double c)
{
    
    float discriminant, root1, root2;

        // Вычисление дискриминанта
        discriminant = b * b - 4 * a * c;

        // Проверка значения дискриминанта
        if (discriminant > 0) {
            // Два различных корня
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            //printf("Корни уравнения: %.2f и %.2f\n", root1, root2);
            return root2;
        } else if (discriminant == 0)
        {
            // Один корень
            root1 = -b / (2 * a);
            //printf("Корень уравнения: %.2f\n", root1);
            return root1;
        }

        return -1;
}
