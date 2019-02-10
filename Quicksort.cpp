#include<iostream>
using namespace std;
void qs(int a[],int f,int l)
{
	//When there is only one element present it will skip the entire if part and function will terminate
	if(f<l)
	{
		int pivot=l,temp;
		for(int i=l-1;i>=f;i--)
		{
			if(a[i]>a[pivot])
			{
				temp=a[i];
				for(int j=i;j<pivot;j++)
				{
					a[j]=a[j+1];
				}
				a[pivot]=temp;
				pivot--;
			}
		}
		qs(a,f,pivot-1);
		qs(a,pivot+1,l);
	}
}
void disp(int a[],int n)
{
    cout << "Sorted array:-\n";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	//declare the variables
	int n;
	//take the inputs
	cout<<"What is the length of the array?\n";
	cin>>n;
	int a[n];
	cout<<"start entering elements"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	qs(a,0,n-1);
	disp(a,n);
	return 0;
}
