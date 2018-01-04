// #include <algorithm>
#include <vector>
#include <stack>
#include <climits>
#include <iostream>

using namespace std;

int solution(std::vector<int> &A, std::vector<int> &B) {
    // write your code in C++14 (g++ 6.2.0)
    stack<int> fish;
    stack<int> size;
    int fish_alive = 0;
    
    for (int i = 0; i < (int)B.size(); i++)
    {
        if (B[i] == 0 && fish.empty())
        {
            fish_alive++;
        }
        else
        {
            if (B[i] == 1)
            {
                fish.push(B[i]); 
                size.push(A[i]);
            }
            else
            {
                while (!fish.empty() && size.top() < A[i] && fish.top() != B[i])
                {
                    fish.pop(); 
                    size.pop();
                }

                if (B[i] == 0 && fish.empty())
                {
                    fish_alive++;
                }
            }
        }        
    }
       
    return (fish.size()+fish_alive);
}
