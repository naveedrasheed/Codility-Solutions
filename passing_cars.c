// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    
    double total_passing_cars = 0;
    int total_cars_going_west = 0;
    int max_threshold_passing_cars = 1000000000;
    
    for (int i = N -1; i >= 0; i--)
    {
        if (A[i] == 1)
        {
            total_cars_going_west++;
        }
        else
        {
            total_passing_cars += total_cars_going_west;
        }
    }
    
    if (total_passing_cars > max_threshold_passing_cars)
    {
        total_passing_cars = -1;
    }
    
    return (int)total_passing_cars;
}