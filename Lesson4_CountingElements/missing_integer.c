int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    
    int *track_arr = (int *) calloc(N, sizeof(int));
    int result = 0;
    int i;
    int found_missing = 0;
    
    for (i = 0; i < N; i++)
    {
        if (A[i] > 0 && A[i] <= N)
        {
            track_arr[A[i]-1] = 1;
        }
    }
    
    for (i = 0; i < N; i++)
    {
        if (track_arr[i] == 0)
        {
            result = ++i;
            found_missing = 1;
            break;
        }
    }
    
    if (!found_missing)
    {
        result = i + 1; 
    }
    
    return result;
}