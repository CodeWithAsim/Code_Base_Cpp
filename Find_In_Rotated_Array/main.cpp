#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std ;

int binary_search(int arr[],int l,int r,int key)
{
	int m = (l+r)/2;
	
	if(l>r)
	{
		return -1 ;
	}
	
	if(arr[m]==key)
	{
		return m;
	}
	
	if(key>arr[m])
	{
		return binary_search(arr,m+1,r,key); 
	}
	
	return binary_search(arr,l,m-1,key); 
}

int find_pivot(int arr[],int l,int r)
{
	int m = (l+r)/2;
	
	if(l==r)
	{
		return l ; // or h
	}
	
	if(l>r)
	{
		return -1;
	}
	
	if(m<r&&arr[m]>arr[m+1])
	{
		return m; 
	}
	
	if(m>l&&arr[m]<arr[m-1])
	{
		return  m-1;
	}
	
	if(arr[l]>arr[m])
	{
		return find_pivot(arr,l,m-1); 
	}
	
	// else case 
	return find_pivot(arr,m+1,r);

}

int find_element(int arr[],int n,int key)
{
	int pivot = find_pivot(arr,0,n-1);
	cout << pivot << endl ;
	
	if(pivot==-1)
	{
		return binary_search(arr,0,n-1,key) ;
	}
	
	if(arr[pivot]==key)
	{
		return pivot ;
	}
	
	if(key>=arr[0])
	{
		return binary_search(arr,0,pivot,key) ;
	}
	 
	return binary_search(arr,pivot+1,n-1,key) ;
}

// Driver code

int main()
{
	int arr[] = { 0,1,2,3,4 } ; 
	int n = sizeof(arr)/sizeof(arr[0]);
	
	// Element to be find
	
	int key = 0 ;
	
	int index = find_element(arr,n,key);
	
	if(index==-1)
	{
		cout << "Not found !";
	}
	else
	{
		cout << "Found at index : "<< index ;
	}
		
	return 0;
}

