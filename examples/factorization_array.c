#include <stdio.h>

// возвращает количество множителей
// объем буфера A должен быть достаточен для x-факторов, т.е обрабатывает х и кладет в буфер А
int get_number_factors(int x, int A[])
{
    int top = 0; // уровень заполненности массива
    int divisor = 2;
    while (x != 1)
    {
        while (x%divisor == 0)
        {
            A[top] = divisor;
            top += 1;
            x /= divisor;
        }
        divisor += 1;
    }
    return top;
}


int main(int argc, char* argv[])
{
    int x;
    printf("Enter number to factorize:");
    scanf("%d", &x);
    int A[100]; // объем буфера, сколько элементов в него может поместиться, важно не допустить переполнения буфера
    int N;
    N = get_number_factors(x, A);

    for(int i = 0; i < N; ++i)
        printf("%d ", A[i]);
    printf("\n");
    
    return 0;
}