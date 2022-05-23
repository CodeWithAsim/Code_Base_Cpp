#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

void printArray(int arr[],int n)
{
	for(int i=0;i<n;i++ )
	{
		cout<<arr[i]<<" ";
	}
}

void sort012(int arr[],int n)
{
	int low = 0 ;
	int mid = 0 ;
	int hig = n-1 ;
	
	while(mid<=hig)
	{
		switch(arr[mid])
		{
			case 0:
				swap(arr[low++],arr[mid++]);
				break;
			case 1 :
				mid++;
				break;
			case 2 :
				swap(arr[mid],arr[hig--]);
				break;
		}
	}
}

int main ()
{
	int arr[]={1,2,0,1,0,2,1,2,0,0,1,2};
	int s= sizeof(arr)/sizeof(arr[0]);
	
	sort012(arr,s);
	cout << "Printing sorted elements : ";
	printArray(arr,s);
	
	string name ;
	cin>> name;
	
	return 0;
}
