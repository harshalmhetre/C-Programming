#include<iostream>
using namespace std;
template <class T1>
void bubblesort(T1 a[10],int s)
{
	int i,j,temp;
	for(i=0;i<s-1;i++)
	{
		for (j=0;j==s-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	cout<<"\n Sorted Array by bubble sort : "<<endl;
	for(i=0;i<s;i++)
	{
		cout<<" "<<a[i];
	}
}

template <class T2>
void selectionsort(T2 a[10],int s)
{
	int i,j,min;
	T2 temp;
	for(i=0;i<s-1;i++)
	{
		min=i;
		for (j=i+1;j<s;j++)
		{
			if(a[min]>a[j]) min=j;
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	cout<<"\n Sorted Array by Selection sort : "<<endl;
	for(i=0;i<s;i++)
	{
		cout<<" "<<a[i];
	}
}

int main()
{
	int x[10],n,ch;
	cout<<"Enter the size of the integer array ";
	cin>>n;
	for (int i=0;i<n;i++)
	{
		cin>>x[i];
	}
	float y[10],m;
	cout<<"Enter the size of the float array ";
	cin>>m;
	for (int i=0;i<m;i++)
	{
		cin>>y[i];
	}
	
	
	cout<<"Enter your choice \n 1.Selection sort \n 2.Bubble sort\n";
	cin>>ch;
	
	switch(ch)
	{
		case 1:selectionsort(x,n);
			   selectionsort(y,m);
			   break;
			   
	    case 2:	bubblesort(x,n);
				bubblesort(y,m);
				break;
		
	}
	
}





