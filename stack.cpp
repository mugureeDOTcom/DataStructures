#include <iostream>
using namespace std;
//declaring the variables and maximum values
int stack[100], n=100, top=-1;
//popping function
void pop() {
   if(top<=-1)
//condition to pop if its empty it outputs stack underflow
   cout<<"Stack Underflow"<<endl;
//if it has elements the top element is popped
   else {
      cout<<"Element popped is "<< stack[top] <<endl;
      top--;
   }
}

//displaying function
void display() {
   if(top>=0) {
//if the stack has elements, they are displayed
      cout<<"Elements are:";
      for(int i=top; i>=0; i--)
      cout<<stack[i]<<" ";
      cout<<endl;
   } else
//if stack is empty it outputs empty stack
   cout<<"Empty Stack";
}

//pushing function
void push(int item) {
   if(top>=n-1)
//if stack has over the max limit the it outputs overflow
   cout<<"Stack Overflow"<<endl;
   else {
//if its not greater than the maximum, the element is pushed
      top++;
      stack[top]=item;
   }
}

//main function, calls all the other functions
int main() {
   int ch, item;
   cout<<"1) pop an element"<<endl;
   cout<<"2) push an element"<<endl;
   cout<<"3) Display elements in the stack"<<endl;
   do {
      cout<<"What do you want to do? : "<<endl;
      cin>>ch;
      switch(ch) {

         case 1: {
            pop();
            break;
         }
         case 2: {
            cout<<"Input value to be push:"<<endl;
            cin>>item;
            push(item);
            break;
         }
         case 3: {
            display();
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=3);
   return 0;
}
