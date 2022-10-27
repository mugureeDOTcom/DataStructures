#include<iostream>
#include<stack>
using namespace std;

//function: Order of precedence
int precedence(char m)
{
  if(m == '^')
  return 3;
  else if(m == '*' || m == '/')
  return 2;
  else if(m == '+' || m == '-')
  return 1;
  else
    return -1;
}

//function to do the conversion from infix to postfix


void infix_to_postfix(string t)
{
  stack<char> s;
  int l = t.length();
  string ans;
  for(int i = 0; i < l; i++)
  {

  // If the scanned character is an operand, add it to output.
   if((t[i] >= 'a' && t[i] <= 'z') || (t[i] >= 'A' && t[i] <= 'Z'))
        ans+=t[i];

  // If the scanned character is an ‘(‘, push it to the stack.
    else if(t[i] == '(')
        s.push('(');

  // If the scanned character is an ‘)’, pop and output from the stack until an ‘(‘ is encountered.
    else if(t[i] == ')')
    {
      while(s.top() != '(')
      {
        char c = s.top();
        ans += c;
        s.pop();
      }
      // Remove '(' from the stack
      if(s.top() == '(')
      {
        char c = s.top();
        s.pop();
      }
    }

    else{
      while(s.empty()==false && precedence(t[i]) <= precedence(s.top()))
      {
        char c = s.top();
        ans += c;
        s.pop();

      }
      s.push(t[i]);
    }
  }

  while(s.empty() == false)
  {
    char c = s.top();
    ans += c;
    s.pop();

  }

  cout <<"\nThe postfix expression is: \n"<< ans << endl;
}

//main function calls on conversion function and passes it user's equation
int main()
{
  string infix;
  cout<<"Enter Infix Expression: ";
  cin>>infix;
  infix_to_postfix(infix);
  return 0;
}
