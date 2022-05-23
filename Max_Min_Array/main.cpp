#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

void re_arrange(int arr[],int n) // Space O(n) -> Bcz of Auxilary Array -> temp[]
{
	int temp[n];
	int max_index=n-1;
	int  min_index=0;
	bool flag = true ; // true -> indicates its maximum turn to put in temp[] array
	 
	for(int i=0;i<n;i++)
	{
		if(flag)
		{
			temp[i]=arr[max_index--];
		}
		else
		{
			temp[i]=arr[min_index++];
		}
		flag=!flag; // flipping it 
	}
	
	for(int i=0;i<n;i++)
	{
		arr[i]=temp[i];
	}		
	
}

int main()
{
	int arr [] = {0,1,2,3,4,5,6,7,8,9};
	int s = sizeof(arr)/sizeof(arr[0]);

	// before re-arranging
	for(int i = 0 ; i<s  ; i++)
	{
		cout << arr[i] << " " ;
	}
	
	cout<< endl ;

	re_arrange(arr,s);

	// after re-arranging
	for(int i = 0 ; i<s  ; i++)
	{
		cout << arr[i] << " " ;
	}
	
	return 0;
}
