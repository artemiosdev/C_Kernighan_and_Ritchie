#include <stdio.h>

#define N 6

void print_array(int A[])
{
    for(int i = 0; i < N; ++i)
        printf(" %d ", A[i]);
    printf("\n");
}

int main(int argc, char* argv[])
{
    int A[N] = {0};

    for(int i = 0; i < N; ++i)  // create array 0  1  2  3  4  5
        A[i] = i;
    print_array(A);

    for(int i = 0; i < N; ++i)  // create array 5  4  3  2  1  0
        A[i] = N - 1 - i;
    print_array(A);

    for(int i = 0; i < N; ++i)  // create array another method 5  4  3  2  1  0
        A[N - 1 - i] = i;
    print_array(A);

    for(int i = 0; i < N; ++i)  // create array 0  1  0  1  0  1
        A[i] = i%2;
    print_array(A);

    for(int i = 0; i < N/2; ++i)  // create array 0  3  1  4  2  5, прыжком через одну
    {
        A[2*i] = i;
        A[2*i+1] = N/2 + i;
    }
    print_array(A);

    return 0;
}