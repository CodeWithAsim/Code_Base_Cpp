#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

void re_arrange(int arr[],int n) // Space O(n) -> Bcz of Auxilary Array -> temp[]
{
	int max_index=n-1;
	int  min_index=0;
	
	int max_element = arr[max_index]+1;
	
	for(int i=0;i<n;i++)
	{
		if(i%2==0) // even -> it indicates maximum lists
		{
			arr[i]=arr[i]+((arr[max_index--]%max_element)*max_element);
		}
		else // odd -> it indicates minimum lists
		{
			arr[i]=arr[i]+((arr[min_index++]%max_element)*max_element);
		}
	} 	
	
	for(int i=0;i<n;i++)
	{
		arr[i]=arr[i]/max_element;
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
