#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std ;

int get_missing_number(int arr[],int n)
{
	int sum_of_n = (n+1) * (n+2) / 2 ; // n(n+1)/2 -> bcz of missing one , so plus one 
	for(int i=0;i<n;i++)
	{
		sum_of_n -= arr[i];
	}
	return sum_of_n;
}

int main()
{
	int arr [] = {1,2,3,4,6,7,8,9};
	int s = sizeof(arr)/sizeof(arr[0]);

	int num = get_missing_number(arr,s);
	cout<<num;
	
	return 0;
}
