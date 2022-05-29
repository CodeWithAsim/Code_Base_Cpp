#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std ;

int count_inversions(int arr[],int s)
{
	int inversions = 0 ;
	
	for(int i=0;i<s-1;i++)
	{
		for(int j=i+1;j<s;j++)
		{
			if(arr[i]>arr[j])
			{
				inversions ++ ;
			}
		}
	}
	return inversions;
}

int main()
{
	int arr [] = { 1, 20, 6, 4, 5 } ;
	int s = sizeof(arr)/sizeof(arr[0]);
	
	int inversions = count_inversions(arr,s);
	
	cout << "Total inversions are : "<<inversions ;
	
	return 0 ;
}
