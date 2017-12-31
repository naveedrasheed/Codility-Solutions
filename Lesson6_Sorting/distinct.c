// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    
    double distinct = 1;
    
    if (N == 0) return 0;
    
    qsort (A, N, sizeof(int), compare);
    
    for (int i = 1; i < N; i++)
    {
        if (A[i - 1] != A[i])
        {
            distinct++;
        }
    }
    
    return (int)distinct;
}