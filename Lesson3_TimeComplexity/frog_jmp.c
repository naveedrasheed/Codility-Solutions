// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int X, int Y, int D) {
    // write your code in C99 (gcc 6.2.0)
    
    int jumps = (Y - X) / D;
    
    if (X+ D*jumps < Y)
        jumps++;
    
    return jumps;
}