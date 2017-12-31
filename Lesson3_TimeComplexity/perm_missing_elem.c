// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    
    long n = N + 1;
    long sum = n * (n+1) / 2;
    
    for (int i = 0; i < N; i++)
    {
        sum -= A[i];
    }
    
    return ((int)sum);
}