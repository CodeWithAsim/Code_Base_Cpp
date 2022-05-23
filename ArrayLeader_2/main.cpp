#include <iostream>
#include <string>
using namespace std;

void printLeaders(int arr [],int size);

int main()
{
	int arr [] = { 12,13,14,5,4,3,2,1 } ;
	int s = sizeof(arr)/sizeof(arr[0]);
	printLeaders(arr , s);
	
	string name  ;
	cin >> name;
}

void printLeaders(int arr[],int size)
{
	int right_max = arr[size-1] ;
	cout << right_max << " ";
	for(int i=size-2 ; i>=0;i--)
	{
		if(arr[i]>right_max)
		{
			right_max=arr[i];
			cout << right_max <<" ";
		}
	}

}
