int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    
    int result = A[0];
    
    for (int i = 1; i < N; i++)
    {
        result ^= A[i];
    }
    
    return (result);
}