#include<iostream>
#include<stack>
#include<algorithm>

using namespace std;

// alphabet or digits only
bool isOperator(char g)
{
    return (!isalpha(g) && !isdigit(g));
}
// precedence order
int precedenceORDER(char m)
{
    if (m == '-' || m == '+')
        return 1;
    else if (m == '*' || m == '/')
        return 2;
    else if (m == '^')
        return 3;
    return 0;
}

//function to convert infix to postfix
string infixToPostfix(string infix)
{
    infix = '(' + infix + ')';
    int l = infix.size();
    stack<char> chrstack;
    string output;

    for (int i = 0; i < l; i++) {

// If the scanned character is an operand, add it to output.
        if (isalpha(infix[i]) || isdigit(infix[i]))
            output += infix[i];
// If the scanned character is a ‘(‘, push it to the stack.
        else if (infix[i] == '(')
            chrstack.push('(');

// If the scanned character is a ‘)’, pop and output from the stack until a ‘(‘ is encountered.
        else if (infix[i] == ')') {
            while (chrstack.top() != '(') {
                output += chrstack.top();
                chrstack.pop();
            }

            // Remove '(' from the stack
            chrstack.pop();
        }

        // Operator found
        else
        {
            if (isOperator(chrstack.top()))
            {
                if(infix[i] == '^')
                {
                      while (precedenceORDER(infix[i]) <= precedenceORDER(chrstack.top()))
                       {
                         output += chrstack.top();
                         chrstack.pop();
                       }

                }
                else
                {
                    while (precedenceORDER(infix[i]) < precedenceORDER(chrstack.top()))
                       {
                         output += chrstack.top();
                         chrstack.pop();
                       }

                }

                // Push current Operator on stack
                chrstack.push(infix[i]);
            }
        }
    }
      while(!chrstack.empty()){
          output += chrstack.top();
        chrstack.pop();
    }
    return output;
}

//function to convert infix to prefix
string infixToPrefix(string infix)
{
    // Reverse String

    int l = infix.size();

    // Reverse infix
    reverse(infix.begin(), infix.end());

    // Replace parenthisis
    for (int i = 0; i < l; i++) {

        if (infix[i] == '(') {
            infix[i] = ')';
        }
        else if (infix[i] == ')') {
            infix[i] = '(';
        }
    }

    string prefix = infixToPostfix(infix);

    // Reverse postfix
    reverse(prefix.begin(), prefix.end());

    cout<<"\nThe prefix expression is: "<< prefix<<endl;
}


int main()
{
    string s;
    cout<< "Enter infix expression: ";
    cin>>s;
    infixToPrefix(s);
    return 0;
}
