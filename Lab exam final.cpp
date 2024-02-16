#include <bits/stdc++.h>

using namespace std;


bool areValid(string expr)
{

    stack<char> temp;
    for (int i = 0; i < expr.length(); i++) {
        if (temp.empty()) {


            temp.push(expr[i]);
        }
        else if ((temp.top() == '(' && expr[i] == ')')
                || (temp.top() == '{' && expr[i] == '}')
                 || (temp.top() == '[' && expr[i] == ']')) {


            temp.pop();
        }
        else {
            temp.push(expr[i]);
        }
    }
    if (temp.empty()) {


        return true;
    }
    return false;
}


int main()
{
    string expr = "[a+b-{c+d*(s-w)/(a+v)}-{(a+s)*(a-d)}]";
    //string expr = "[a+b-{c+d*(s-w/(a+v)}-{(a+s)*(a-d)}]";


    if (areValid(expr))
        cout << "Valid";
    else
        cout << "Invalid";
    return 0;
}
