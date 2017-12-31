int solution(int N) {
    // write your code in C99 (gcc 6.2.0)
    
    int result=0, gap=0, count=0;
    
    for (; N > 0; N/=2)
    {
        if (N % 2 > 0)
        {
            if (result < gap) result = gap;
            count = 1;
            gap = 0;
        }
        else if (N % 2 == 0)
        {
            if (count == 1) gap++;
        }
    }
    
    return (result);
}