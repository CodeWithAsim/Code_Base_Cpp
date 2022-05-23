#include <iostream>
#include <string>
using namespace std;

int Kth(int arr1[],int arr2[],int s1,int s2,int k)
{
	int sorted[s1+s2];
	int i = 0 , j = 0 , c = 0 ; 
	
	while(i<s1&&j<s2)
	{
		if(arr1[i]<arr2[j])
		{
			sorted[c++]=arr1[i++];
		}
		else
		{
			sorted[c++]=arr2[j++];
		}
	}
	while(i<s1)
	{
		sorted[c++]=arr1[i++];
	} 
	while(j<s2)
	{
		sorted[c++]=arr2[j++];
	} 
	
	return sorted[k-1];
}

int main()
{
	int arr1[] = {2,4,6,8};
	int arr2[] = {1,3,5,7,9};
	
	int s1 = sizeof(arr1)/sizeof(arr1[0]);
	int s2 = sizeof(arr2)/sizeof(arr2[0]);
	
	int k=5;
	
	cout<<Kth(arr1,arr2,s1,s2,k);
	
	return 0;
}
