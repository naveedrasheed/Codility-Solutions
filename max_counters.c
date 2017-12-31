#include <limits.h>

struct Results solution(int N, int A[], int M) {
    struct Results result;
    // write your code in C99 (gcc 6.2.0)
    
    int *C = (int *) calloc(N, sizeof(int));
    int i;
    int max = 0;
    int is_new_max = 0;
    int last_known_max = 0;
    
    for (i = 0; i < M; i++)
    {
        if (A[i] <= N)
        {
            if (C[A[i]-1] < last_known_max)
            {
                C[A[i]-1] = last_known_max;
            }
            
            C[A[i]-1]++;
            
            if (C[A[i]-1] > max)
            {
                max = C[A[i]-1];
            }
        }
        else
        {
            last_known_max = max;
        }
    }
    
    for (i = 0; i < N; i++)
    {
        if (C[i] < last_known_max)
        {
            C[i] = last_known_max;
        }
    }
    
    result.C = C;
    result.L = N;
    
    return result;
}