// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

struct Results solution(int A[], int N, int K) {
    struct Results result;
    // write your code in C99 (gcc 6.2.0)
    
    result.A = (int *) malloc (sizeof (int) * N);
    
    if (K > 0 && K != N && N > 0)
    {
        K %= N;
        int j = 0;
        for (int i = N - 1; j < K; i--, j++)
        {
            result.A[K - j - 1] = A[i];
        }
        
        for (int i = 0; j < N; i++, j++)
        {
            result.A[j] = A[i];
        }
    }
    else
    {
        for (int i = 0; i < N; i++)
        {
            result.A[i] = A[i];
        }
    }
    
    result.N = N;
    
    return result;
}