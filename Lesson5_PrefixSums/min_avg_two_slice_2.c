// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

#include <limits.h>

double return_min_avg(int a, int b, int c)
{
    int sum = 0;
    double avg2, avg3;
    
    sum = a + b;
    avg2 = sum / 2.0;
    
    avg3 = (sum + c) / 3.0;
    
    return (avg2 < avg3) ? avg2 : avg3;
}

int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    double min;
    int x_coordinate;
    double *avg;
    int i;
    
    if (N == 2) return 0;
    
    avg = (double *)malloc(sizeof(double)*N-1);
    min = INT_MAX;
    x_coordinate = 0;
    *avg;
    i=0;
    
    for (i = 0; i < N-2; i++)
    {
        avg[i] = return_min_avg(A[i], A[i+1], A[i+2]);
    }
    
    avg[i] = (A[i] + A[i+1]) / 2.0;
    
    for (i = 0; i < N-1; i++)
    {
        // printf("%1f\t", avg[i]);
        if (avg[i] < min)
        {
            min = avg[i];
            x_coordinate = i;
        }
    }
    
    // printf("%1f\t", min);
        
    return x_coordinate;
}
