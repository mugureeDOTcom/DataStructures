//program to sort array in ascending order
#include <iostream>
using namespace std;
#define max 100

int main()
{
    //array declaration
    int i,j, n;
    int arr[max];
    int temp;

    //read elements of n to be read
    cout<<"Enter no of elements to be read: ";
    cin>> n;

    //check the bounds

        if (n<0 || n>max)
        {
        cout<<"input valid range: "<<endl ;
        return -1;
    }
    //read n elements
    for (i=0;i<n;i++)
    {
        cout<<"Input element,   "<<i+1<<":";
        cin>>arr[i];
    }
    //print input elements
    cout<<"Unsorted Array Elements "<<endl;
    for(i=0; i<n; i++)
  {

    cout<<arr[i]<<"\t";
  }
    //sorting the elements
    for (i=0;i<n;i++)
    {
        for (j=0;j<1;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    //print the sorted array
    cout<<endl;
    cout<<"Ascending order: "<<endl ;
    for(i=0;i<n;i++)
    {
    cout <<arr[i]<<"\t";

    }
    return 0;
}

