#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int find_sub_array(int arr[],int s,int sum)
{
	int cur_sum = arr [0];
	int start = 0;
	for(int i=1;i<=s;i++)
	{
		while(cur_sum>sum&&start<i-1)
		{
			cur_sum-=arr[start];
			start++;
		}
		if(cur_sum==sum)
		{
			cout << "Sub-Array between indexes "<<start<<" and "<<i-1;
			return 1;
		}
		if(cur_sum<sum&&i<s)
		{
			cur_sum+=arr[i];
		}
	}
	cout<<"No sub-array fund with sum "<<sum;
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
