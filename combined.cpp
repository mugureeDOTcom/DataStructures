//program declaration
#include <iostream>
using namespace std;
#define max 100

int main(){
int num[max];
int i,j,n;
int temp;
//read total number of elements
cout<<"Input N(number of numbers you want to sort). "<<endl;
cin>>n;

//checking the bounds
if(n<0 || n>max)
{
     cout<<"Please input valid range: "<<endl;
     return -1;
}

//read elements
	for(i=0;i<n;i++){
    cout<<i+1<<") ";
	cin>>num[i];
	}
//print input element
	cout<<"Unsorted "<<endl;
	for(i=0;i<n;i++)
        {
            cout<<num[i]<<"\t";
        }
//sorting in ascending order
        for(i=0;i<n;i++)
        {
		for(j=0;j<n;j++)
            {
			if(num[i]<num[j])
			{
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	}
	//print elements sorted in ascending order
	cout<<endl;
	cout<<"Ascending "<<endl;
	for(i=0;i<n;i++){
	cout<<" "<<num[i]<<endl;;
	}
	//sort in descending order

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(num[i]>num[j]){
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	}
	//printing in descending
	cout<<"Descending "<<endl;
	for(i=0;i<n;i++){
		cout<<" "<<num[i]<<endl;
}
return 0;
}
