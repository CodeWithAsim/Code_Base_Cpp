#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std ;

int find_k_occurrence(int arr[],int s,int k)
{
	unordered_map<int , int> mp ;
	
	// storing with count
	for(int i=0;i<s;i++)
	{
		mp[arr[i]]++;
	}
	
	// finding 
	for(int i=0;i<s;i++)
	{
		if(mp[arr[i]]==k)
		{
			return arr[i];
		}
	}
	
	return -1;
}

int main()
{
	int arr [] = {1, 7, 4, 3, 4, 8, 7} ;
	int s = sizeof(arr)/sizeof(arr[0]) ;
	
	int k = 2 ;
	
	cout << "First element found with "<< k << " times occurrence is : " << find_k_occurrence(arr,s,k);
	
	return 0;
}
