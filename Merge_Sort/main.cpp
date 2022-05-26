#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std ;

void merge(int arr[],int l,int m,int r)
{
	int lsa_size = 1+m-l;
	int rsa_size = r-m;
	
	auto * lsa = new int[lsa_size] , * rsa = new int[rsa_size] ;
 
	
	for(int i=0;i<lsa_size;i++)
	{
		lsa[i]=arr[l+i];	
	}  
	
	for(int j=0;j<rsa_size;j++)
	{
		rsa[j]=arr[1+m+j];	
	}  
	
	int lsa_index = 0 ;
	int rsa_index = 0 ;
	int merge_index = l ;
	
 	while(lsa_index<lsa_size && rsa_index<rsa_size)
	{
		if(lsa[lsa_index]<=rsa[rsa_index])
		{
			arr[merge_index]=lsa[lsa_index];
			lsa_index++;
		}
		else
		{
			arr[merge_index]=rsa[rsa_index];
			rsa_index++;
		}
		merge_index++;
	}
	
	while(lsa_index<lsa_size)
	{
		arr[merge_index]=lsa[lsa_index];
		lsa_index++;
		merge_index ++;
	}
	while(rsa_index<rsa_size)
	{
		arr[merge_index]=rsa[rsa_index];
		rsa_index++;
		merge_index ++;
	}
	
	return ;
}

void merge_sort(int arr[],int l,int r)
{
	if(l>=r)
	{
		return ;
	}
	
	int m = l+(r-l)/2;
	
	merge_sort(arr,l,m);
	merge_sort(arr,m+1,r);
	
	merge(arr,l,m,r);
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
	int arr[] = {0,2,9,9,1,8,3,7,4,6,5,1} ;
	int n = sizeof(arr)/sizeof(arr[0]);
	
	cout<<"Before sorting : \n";
	print_array(arr,n);
	
	merge_sort(arr,0,n-1);
	
	cout<<"\nAfter sorting : \n";
	print_array(arr,n);
	
	return 0;
}
