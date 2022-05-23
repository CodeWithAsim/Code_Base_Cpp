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
	int c0=0,c1=0,c2=0;
	int i ;
	
	for (i=0;i<n;i++)
	{
		switch(arr[i])
		{
			case 0:
				c0++;
				break;
			case 1:
				c1++;
				break;
			case 2:
				c2++;
				break;	
		}
	}
	
	i=0;
	
	while(c0>0)
	{
		arr[i++]=0;
		c0--;
	}
	while(c1>0)
	{
		arr[i++]=1;
		c1--;
	}
	while(c2>0)
	{
		arr[i++]=2;
		c2--;
	}
	
	return printArray(arr,n);
}

int main ()
{
	int arr[]={1,2,0,1,0,2,1,2,0,0,1,2};
	int s= sizeof(arr)/sizeof(arr[0]);
	
	cout << "Sorted array elements : ";
	sort012(arr,s);
	
	string name ;
	cin>> name;
	
	return 0;
}
