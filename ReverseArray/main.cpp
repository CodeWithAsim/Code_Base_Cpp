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

void reverse(int arr[],int n,int k)
{
	for (int i=0;i<n;i+=k)
	{
		int left = i;
		int right = min (n-1,i+k-1);
		
		while(left<right)
		{
			swap(arr[left++],arr[right--]);
		}
	}
}

int main ()
{
	int arr[]={0,1,2,3,4,5,6,7,8,9};
	int s= sizeof(arr)/sizeof(arr[0]);
	int  k = 3;
	
	reverse(arr,s,k);
	
	printArray(arr,s);
	
	string name ;
	cin>> name;
	
	return 0;
}
