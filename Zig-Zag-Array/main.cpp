#include <iostream>
#include <string>
using namespace std;

void zig_zag(int arr[] , int n)
{
	bool flag = true ;
	for (int i=0;i<n-2;i++)
	{
		if(flag)
		{
			if(arr[i]>arr[i+1])
			{
				swap(arr[i],arr[i+1]);
			}	
		}
		else
		{
			if(arr[i]<arr[i+1])
			{
				swap(arr[i],arr[i+1]);
			}	
		}
		flag = !flag ; // flip the flag 	
	}
	
	return ;
}


int main()
{
	int arr [] = {1,6,2,3,7,5,9,8,0};
	int s = sizeof(arr)/sizeof(arr[0]);

	for(int i = 0 ; i<s  ; i++)
	{
		cout << arr[i] << " " ;
	}
	
	cout<< endl ;

	zig_zag(arr,s);

	for(int i = 0 ; i<s  ; i++)
	{
		cout << arr[i] << " " ;
	}
	
	return 0;
}
