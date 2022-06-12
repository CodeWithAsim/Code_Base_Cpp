#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std ;

// using binary search logic 

int search_once(int arr[],int l,int h)
{
	// boundry conditions 
	
	if(l>h)
	{
		return -1;
	}
	if(l==h)
	{
		return arr[l];
	}
	
	int m = (l+h)/2;
	if(m%2==0)
	{
		if(arr[m]==arr[m+1])
		{
			search_once(arr,m+2,h);
		}
		else
		{
			search_once(arr,l,m);
		}
	}
	else //odd
	{
		if(arr[m]==arr[m-1])
		{
			search_once(arr,m+1,h);
		}
		else
		{
			search_once(arr,l,m-1);
		}
	}
}

int main()
{
	int arr[] = { 1, 1, 2, 4, 4, 5, 5, 6, 6 };
	int s = sizeof(arr)/sizeof(arr[0]);
	
	int number = search_once(arr,0,s-1);
	
	if(number==-1)
	{
		cout<<"There is no such number";
	}
	else
	{
		cout<<"The required number is : "<<number ;
	}
	
	return 0;
}
