// you can use includes, for example:
#include <algorithm>
#include <vector> 

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    
    int last, first;
    int N = A.size();

    std::sort (A.begin(), A.end()); 
    
    last = A[N-1]*A[N-2]*A[N-3];
    first = A[0]*A[1]*A[N-1];
    
    if (last > first)
        return last;
    
    return first;    
}
