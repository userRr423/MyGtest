#include "EqSq.h"
#include "math.h"
#include <stdio.h>
#include <stdlib.h>

void roots(float a, float b, float c, float* root1, float* root2)
{
    float discriminant;

        // Вычисление дискриминанта
        discriminant = b * b - 4 * a * c;

        // Проверка значения дискриминанта
        if (discriminant >= 0) {
            // Два различных корня
            *root1 = (-b + sqrt(discriminant)) / (2 * a);
            *root2 = (-b - sqrt(discriminant)) / (2 * a);
        } else if (discriminant == 0) {
            // Один корень
            *root1 = -b / (2 * a);
            *root2 = *root1;
        } else {
            // Комплексные корни
            *root1 = (-b) / (2 * a);
            *root2 = sqrt(-discriminant) / (2 * a);
        }
}
