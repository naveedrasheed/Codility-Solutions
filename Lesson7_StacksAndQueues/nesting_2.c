// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

//This solution has space complexity O(1)

int solution(string &S) {
    // write your code in C++14 (g++ 6.2.0)
    int result = 0;
    
    if (S.empty())
    {
        return 1;
    }    
    
    for (std::string::iterator it=S.begin(); it!=S.end(); ++it)
    {     
        if (*it == ')')
        {
            result--;
            
            if (result < 0)
            {
                return 0;
            }
        }
        
        if (*it == '(')
        {
            result++;
        }
    }
    
    result = result ? 0 : 1;
    
    return result;
}
