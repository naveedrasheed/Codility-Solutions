// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

#include <limits.h>

int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    double min = INT_MAX;
    int x_coordinate = 0;
    double avg;
    int i;
    
    for (i = 0; i < N-2; i++)
    {
        avg = (A[i] + A[i+1]) / 2.0;
        if (avg < min)
        {
            x_coordinate = i;
            min = avg;
        }
        
        avg = (A[i] + A[i+1] + A[i+2]) / 3.0;
        if (avg < min)
        {
            x_coordinate = i;
            min = avg;
        }
    }
    
    avg = (A[i] + A[i+1]) / 2.0;
    if (avg < min)
    {
        x_coordinate = i;
    }
    
    return x_coordinate;
}
