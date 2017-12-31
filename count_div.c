// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int A, int B, int K) {
    // write your code in C99 (gcc 6.2.0)
    
    int result;
    
    if (A < K && A != 0)
        A = K;
    
    result = ((B/K) - (A/K));
    
    if (A%K == 0)
        result++;
    
    return (result);
}