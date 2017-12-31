// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/* Remember to remove this define or you'll get a performance hit */
// #define X_DEBUG_MODE

#ifdef X_DEBUG_MODE

#define X_PRINT(x,y) printf((x),(y))

#else

#define X_PRINT(x,y) 

#endif

int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    
    long *sum_arr = (long *)malloc(sizeof(long) * N);
    long sum = 0;
    int min = INT_MAX;
    long abs_val;
    
    for (int i = 0; i < N; i++)
    {
        sum_arr[i] = sum += A[i];
    }
    
    X_PRINT("sum = %d\r\n", sum);
    
    for (int i = 0; i < N - 1; i++)
    {
        abs_val = abs((sum_arr[i] << 1) - sum);
        
        X_PRINT("sum_arr[i] = %d\r\n", sum_arr[i]);
        
        if (abs_val < min)
        {
            min =  abs_val;
        }
    }
    
    return min;
}