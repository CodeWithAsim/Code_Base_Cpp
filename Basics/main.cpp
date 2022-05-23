#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <cstdio>
#include <array>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
	int arr[] = {1,2,3,4,5};
	int* p = arr ;
	for(int* i=p;i!=p+5;i++)
	{
		std::cout<<*i<<std::endl;
	} 

	array<int,5> arr = {1,2,3,4,5};
	for(int i = 0;i<arr.size();i++)
	{
		cout<<arr[i]<<endl;
	}

	array<int,5> arr = {1,2,3,4,5};
	for(auto it : arr)
	{
		cout<<it<<endl;
	}
	
	array<int,5> arr = {1,2,3,4,5};
	for(auto i=arr.begin();i!=arr.end();i++)
	{
		cout<<*i<<endl;
	}
	
	return 0;
} 
