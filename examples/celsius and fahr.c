#include <stdio.h>
int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;   /* нижняя граница таблицы температур */ 
    upper = 300; /* верхняя граница */ 
    step = 20;   /* шаг */

    celsius = lower;
          printf("Таблица\n");
    while (celsius <= upper) { 
        fahr = (9.0 * celsius) / 5.0 + 32.0;
        printf("%3.0f %6.0f\n", celsius, fahr);
        celsius = celsius + step;
    }
}