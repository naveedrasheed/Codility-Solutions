#include <stdlib.h>

int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int *track_arr;
    int result = 1;
    
    track_arr = (int*) calloc (N, sizeof(int));
    
    for (int i = 0; i < N; i++)
    {
        if (A[i] <= N)
            track_arr[A[i]-1] += 1;
    }
    
    for (int i = 0; i < N; i++)
    {
        if (track_arr[i] != 1)
        {
            result = 0;
            break;
        }
    }
    
    return result;
}