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

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    stack<int> leader;
    int dominator_index = -1;
    int dominator_count = 0;
    int dominator_value = 0;
    
    if (A.empty())
    {
        return (dominator_index);
    } 
    
    for (int i = 0; i < (int)A.size(); i++)
    {
        if (leader.empty())
        {
            leader.push(A[i]);        
        }
        else
        {
            if (leader.top() == A[i])
            {
                leader.push(A[i]);
            }
            else
            {
                leader.pop();
            }
        }
    }
    
    dominator_value = leader.top();
    // cout << leader.top();
    
    for (int i = 0; i < (int)A.size(); i++)
    {
        if (A[i] == dominator_value)
        {
            dominator_count++;
            dominator_index = i;
        }
    }
    
    if (dominator_count <= (int)A.size() / 2)
    {
        dominator_index = -1;
    }
    
    return (dominator_index);
}
