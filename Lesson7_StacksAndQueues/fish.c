// you can use includes, for example:
// #include <algorithm>
#include <stack>
#include <climits>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A, vector<int> &B) {
    // write your code in C++14 (g++ 6.2.0)
    stack<int> fish;
    int fish_size = INT_MAX;
    int active_fish;
    
    fish.push(B[0]);
    fish_size = A[0];
        
    for (int i = 1; i < B.size(); i++)
    {
        active_fish = fish.top();
        
        if (active_fish && B[i] == 0)
        {
            if (fish_size < A[i])
            {
                fish.pop();
            }
            else
            {
                continue;
            }
        }
        
        fish.push(B[i]);
        fish_size = A[i];
    }
    
    return (fish.size());
}
