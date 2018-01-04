// you can use includes, for example:
// #include <algorithm>
#include <stack>          // std::stack

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(string &S) {
    // write your code in C++14 (g++ 6.2.0)
    stack<char> bracket;
    char ch;
    int result = 0;
    
    if (S.empty())
    {
        return 1;
    }    
    
    for (std::string::iterator it=S.begin(); it!=S.end(); ++it)
    {     
        switch (*it)
        {
            case ')':
                ch = bracket.top();
                if (ch != '(')
                {
                    return 0;
                }
                bracket.pop();
                result = 1;
                break;
            case '}':
                ch = bracket.top();
                if (ch != '{')
                {
                    return 0;
                }
                bracket.pop();
                result = 1;
                break;
            case ']':
                ch = bracket.top();
                if (ch != '[')
                {
                    return 0;
                }
                bracket.pop();
                result = 1;
                break;
        }
        
        switch (*it)
        {
            case '(':
            case '{':
            case '[':
                bracket.push(*it);
                result = 0;
        }
    }
    
    if (result && !bracket.empty())
    {
        result = 0;
    }
    
    return result;
}
