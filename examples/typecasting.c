#include <stdio.h>

int main(int argc, char* argv[])
{
    // int is implicitly cast to unsigned int
    /* Если типы не соответствуют друг другу, 
    то происходит неявное автоматическое приведение типов 
    на выходе при каждой арифметической операции */
    int x = -100;
    unsigned int y = 10U;
    long long int z = x + y;
    printf("z = %lld\n", z);

    // char is explicitly (явное) cast to int
    char c = 'Я';
    int d = (int)c * 10;
    printf("d = %d\n", d);

    return 0;
}

