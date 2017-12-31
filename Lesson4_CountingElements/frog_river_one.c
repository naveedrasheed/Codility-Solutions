int solution(int X, int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    
    int result = -1;
    int *x_arr = (int *) calloc(X,sizeof(int));
    int unique_count = 0;
    
    for (int i = 0; i < N; i++)
    {
        if (A[i] <= X)
        {
            if (x_arr[A[i]-1] == 0)
            {
                unique_count++;
            }
            
            x_arr[A[i]-1] = 1;
        }
        
        if (unique_count == X)
        {
            result = i;
            break;
        }
    }
        
    return result;
}