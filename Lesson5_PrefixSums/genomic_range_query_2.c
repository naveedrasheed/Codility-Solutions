// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");
#include <limits.h>

void get_last_seen(char *S, int *last_seen, char c, int idx)
{
    if (S[idx] == c)
    {
        last_seen[idx] = idx;
    }
    else if (idx > 0)
    {
        last_seen[idx] = last_seen[idx - 1];
    }
    else
    {
        last_seen[idx] = -1;
    }
}

struct Results solution(char *S, int P[], int Q[], int M) {
    struct Results result;
    // write your code in C99 (gcc 6.2.0)
    int N = strlen(S);
    
    int *A = (int *) malloc(sizeof (int) * M);
    int *last_seen_A = (int *) calloc(N, sizeof (int));
    int *last_seen_C = (int *) calloc(N, sizeof (int));
    int *last_seen_G = (int *) calloc(N, sizeof (int));
    int *last_seen_T = (int *) calloc(N, sizeof (int));
    
    for (int i = 0; i < N; i++)
    {
        get_last_seen(S, last_seen_A, 'A', i);
        get_last_seen(S, last_seen_C, 'C', i);
        get_last_seen(S, last_seen_G, 'G', i);
        get_last_seen(S, last_seen_T, 'T', i);
    }
    
    for (int i = 0; i < M; i++)
    {
        if (last_seen_A[Q[i]] >= P[i])
            A[i] = 1;
        else if (last_seen_C[Q[i]] >= P[i])
            A[i] = 2;
        else if (last_seen_G[Q[i]] >= P[i])
            A[i] = 3;
        else if (last_seen_T[Q[i]] >= P[i])
            A[i] = 4;
    }
    
    result.A = A;
    result.M = M;
    
    return result;
}