#include <iostream>
using namespace std;
#define max 100
int main ()

//declaration
{
    int num[max];
    int i,j,n;
    int temp;

    //read number of elements
    cout<<"Enter number of elements: "<<endl;
    cin>>n;

    //check bound limits
    if(n<0 || n>max)
    {
        cout<<"Please input valid range: "<<endl;
        return -1;
    }
    //read n element
    for (i=0;i<n;i++)
    {
        cout<<i+1<<") ";
        cin>>num[i];
    }
    //print input elements
    cout<<"Unsorted elements"<<endl;
    for (i=0;i<n;i++)
    {
        cout<<"Enter elements"<<endl;
        for (i=0;i<n;i++)
        {
            cout<<num[i]<<"\t";
        }
    //sorting descending order
        for(i=0;i<n;i++)
        {
           for (j=0;j<n;j++)
           {
               if (num[i]>num[j])
               {
                   temp=num[i];
                   num[i]=num[j];
                   num[j]=temp;
               }
           }
        }
    //printing elements sorted in descend
    cout<<endl;
    cout<<"Descending: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<num[i]<<"\t";
    }
    return 0;
}
}
