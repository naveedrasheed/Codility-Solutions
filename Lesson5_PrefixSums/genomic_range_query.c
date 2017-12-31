// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");
#include <limits.h>

int get_min_impact_factor(int start, int end, char *S)
{
    char min_imp_fact = CHAR_MAX;
    
    for (int i = start; i <= end; i++)
    {
        if (S[i] < min_imp_fact)
        {
            min_imp_fact = S[i];
        }
    }
    
    switch(min_imp_fact)
    {
        case 'A':min_imp_fact=1;break;
        case 'C':min_imp_fact=2;break;
        case 'G':min_imp_fact=3;break;
        case 'T':min_imp_fact=4;break;
    }
    
    return ((int)min_imp_fact);
}

struct Results solution(char *S, int P[], int Q[], int M) {
    struct Results result;
    // write your code in C99 (gcc 6.2.0)
    
    int *A = (int *) malloc(sizeof (int) * M);
    
    for (int i = 0; i < M; i++)
    {
        A[i] = get_min_impact_factor(P[i], Q[i], S);
    }
    
    result.A = A;
    result.M = M;
    
    return result;
}
