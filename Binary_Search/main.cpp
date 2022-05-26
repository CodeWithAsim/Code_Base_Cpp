#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std ;

int binary_search(int arr[],int l,int r,int x)
{
	if(r>=l)
	{
		int mid = l+(r-l)/2; // l+r/2 -> causes value larger to store in range of int type 
		
		if(x==arr[mid])
		{
			return mid;	
		}
		if(x>arr[mid])
		{
			return binary_search(arr,mid+1,r,x);
		}
		if(x<arr[mid])
		{
			return binary_search(arr,l,mid-1,x);
		}	
	}
	
	return -1;
}

int main()
{
	// assumed array is sorted 
	
	int arr[]={ 2, 3, 4, 10, 40 } ;
	int s = sizeof(arr)/sizeof(arr[0]);
	int search = 11 ;
	
	int res = binary_search(arr,0,s-1,search);
	
	(res==-1)
		? cout<<search<<" is not present in array "
		: cout<<search<<" is found at index "<<res;
			
	return 0 ;
}

