#include <iostream>
using namespace std;
//declaring the variables the max,front and rear
int queue[50], n=50, front=-1, rear=-1;

//insertion function
void insertion(){
int item;
if (rear == n-1 )
//if the queue is full output is overflow
    cout<<"Overflow"<<endl;
    else{
//if the queue is not full, the element is added at the rear of the queue
    cout<<"INput element to be inserted: "<<endl;
    cin>>item;
    rear++;
    queue[rear] = item;
}
}

void deletion(){
//if queues empty the is nothing to be deleted then output is underflow
if (front == -1 || front>rear){
    cout<<"Underflow"<<endl;
    return ;

}
else {
//if the queue is not empty the item at the front is deleted
    cout<<"Deleted element is: "<<queue[front]<<endl;
    front++;;

}
}

void display(){
if (front == -1)
    cout<<"Queue is empty"<<endl;
    else{
        cout<<"Elements in queue: ";
        for (int r = front; r<= rear; r++)
            cout<<queue[r]<<" ";
                cout <<endl;

}

}

int main(){
char choice;

cout<<"A) Insert element" <<endl;
cout<<"B) Delete element" <<endl;
cout<<"C) Display queue " <<endl;
cout<<"What do you want to do? : "<<endl;
cin>>choice;
 switch (choice){

 case 'A': insertion();
            main();
 break;
 case 'B': deletion();
            main();
 break;
 case 'C': display();
            main();
 break;
 default: cout<<"invalid "<<endl;
            main();
 }
return 0;
 }
