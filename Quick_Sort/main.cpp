#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std ;

int partition(int arr[],int l,int r)
{
	int pivot = arr[r];
	int c = (l-1) ;
	
	for(int i = l ; i<=r-1 ; i++)
	{
		if(arr[i]<=pivot)
		{
			c++;
			swap(arr[c],arr[i]);
		}
	}
	
	swap(arr[c+1],arr[r]);
	
	return c+1;
}

void quick_sort(int arr[],int p ,int r)
{
	if(p>=r)
	{
		return ;
	}
	
	int q = partition(arr,p,r); // key process 
		
	quick_sort(arr,p,q-1);
	quick_sort(arr,q+1,r);	
}

// UTILITY FUNCTION
void print_array(int arr[],int s)
{
	for(int i=0;i<s;i++)
	{
		cout<<arr[i]<<" ";
	}
	return ;
}

int main()
{
	int arr[] = {10, 7, 8, 9, 1, 5} ;
	int n = sizeof(arr)/sizeof(arr[0]);
	
	cout<<"Before sorting : \n";
	print_array(arr,n);
	
	quick_sort(arr,0,n-1);
	
	cout<<"\nAfter sorting : \n";
	print_array(arr,n);
	
	return 0 ;
}
