#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std ;

int search_once(int arr[],int s)
{
	int XOR = 0 ;
	for (int i=0 ; i<s ; i++)
	{
		XOR = XOR ^ arr[i];
	}
	
	return XOR ;
}

int main()
{
	int arr[] = { 1, 1, 2, 2, 4, 5, 5, 6, 6 };
	int s = sizeof(arr)/sizeof(arr[0]);
	
	int number = search_once(arr,s);
	cout<<"The required number is : "<<number ;
	
	return 0;
}
