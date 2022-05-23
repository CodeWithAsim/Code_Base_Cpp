#include <iostream>
#include <string>
using namespace std;

int Kth(int arr1[],int arr2[],int s1,int s2,int k)
{
	int i = 0 , j = 0 , c = 0 ; 
	
	while(i<s1&&j<s2)
	{
		if(arr1[i]<arr2[j])
		{
			c++;
			if(c==k)
			{
				return arr1[i];
			}
			i++;
		}
		else
		{
			c++;
			if(c==k)
			{
				return arr2[j];
			}
			j++;
		}
	}
	while(i<s1)
	{
		c++;
		if(c==k)
		{
			return arr1[i];
		}
		i++;
	} 
	while(j<s2)
	{
		c++;
		if(c==k)
		{
			return arr2[j];
		}
		j++;
	} 
	
	return -1 ;	
}

int main()
{
	int arr1[] = {6,7,8,9,10};
	int arr2[] = {1,2,3,4,5};
	
	int s1 = sizeof(arr1)/sizeof(arr1[0]);
	int s2 = sizeof(arr2)/sizeof(arr2[0]);
	
	int k=15;
	
	cout<<Kth(arr1,arr2,s1,s2,k);
	
	return 0;
}
