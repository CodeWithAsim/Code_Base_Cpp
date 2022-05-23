#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int find_sub_array(int arr[],int s,int sum)
{
	int cur_sum ;
	for(int i=0;i<s;i++)
	{
		cur_sum=arr[i];
		for(int j=i+1;j<=s;j++)
		{
			if(cur_sum==sum)
			{
				cout << "Sub-Array find between indexes "<<i<<" to "<<j-1<<" with sum "<<sum ; 
				return 1;
			}
			if(cur_sum>sum||j==s)
			{
				break ;
			}
			cur_sum+=arr[j];
		}
	}
	cout << "No sub-array found with sum "<< sum ;
	return 0;
}

int main()
{
	int arr[] = { 15, 2, 4, 8, 9, 5, 10, 23 } ;
	int s = sizeof(arr)/sizeof(arr[0]) ;
	int sum = 23 ;
	
	find_sub_array(arr,s,sum);
	 	
	return 0;
}
