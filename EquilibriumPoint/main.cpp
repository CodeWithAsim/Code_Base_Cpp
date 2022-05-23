#include <iostream>
#include <string>
using namespace std;

void findElement (int arr[],int n)
{
	int prefix_arr [n] ;
	prefix_arr [0] = arr[0];
	
	for(int i=1;i<n;i++)
	{
		prefix_arr[i]=prefix_arr[i-1]+arr[i];
	}
	
	int suffix_arr [n] ;
	suffix_arr [n-1] = arr[n-1];
	
	for(int i=n-2;i>=0;i--)
	{
		suffix_arr[i]=suffix_arr[i+1]+arr[i];
	}
	
	for (int j = 0 ; j<n; j++)
	{
		if (prefix_arr[j]==suffix_arr[j])
		{
			cout<< arr[j] << " is the partition element in the array" << endl ;
		}
	}
	
}

// Driver Function 
int main()
{
	int arr [] = {3,4,1,5,2} ;
	int s = sizeof(arr)/sizeof(arr[0]);
	findElement(arr,s);
	
	string name;
	cin>>name;

	return 0;
}

