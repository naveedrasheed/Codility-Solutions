#include <stdio.h>

// you can use includes, for example:
// #include <algorithm>
#include <vector>
#include <stack>
#include <climits>
#include <iostream>

using namespace std;

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &H) {
    // write your code in C++14 (g++ 6.2.0)
    stack<int> block_size;
    int block_count = 1;
    
    block_size.push(H[0]); 
    
    for (int i = 1; i < (int)H.size(); i++)
    {
        if (block_size.top() > H[i])
        {
            do 
            {
                block_size.pop();
            }
            while (!block_size.empty() && block_size.top() > H[i]);
            
            if (block_size.empty() || block_size.top() != H[i])
            {
                block_size.push(H[i]);
                block_count++;
            }
        }
        else if (block_size.top() < H[i])
        {
            block_size.push(H[i]);
            block_count++;
        }
    }
    
    return (block_count);
}
