#include <iostream>
#include <string>
using namespace std;

void printLeaders(int arr[] , int size)
{
	for(int i = 0 ; i<size ; i++)
	{
		int j ;
		for(j=i+1;j<size;j++)
		{
			if(arr[i]<=arr[j])
			{
				break;
			}
		}
		if(j==size) // loop doest not break and reach to end 
		{
			cout << arr[i]<<" ";
		}
	}
}

int main()
{
//	string name ;
//	cout << "Hello Asim ! Have faith in Allah ! Every thing will be fine "<<endl;
//	cin >> name ;
	
	int arr[] ={16,17,5,4,6,2} ;
	int s = sizeof(arr)/sizeof(arr[0]);
	printLeaders(arr,s);
	
	string name ; 
	cin >> name ;
}

