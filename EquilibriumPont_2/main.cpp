#include <iostream>
#include <string>
using namespace std;

void findElement(int arr [],int n)
{
	int right_sum = 0;
	for(int i=1;i<n;i++)
	{
		right_sum += arr[i];
	}

	int left_sum = 0 ;
	for(int i=0,j=1 ; j<n ; i++,j++)
	{
		left_sum += arr[i];
		right_sum -= arr[j];
		
		if(left_sum == right_sum)
		{
			cout << "Partition element in the given array is : "<< arr[i+1]<<endl;  
			break;
		}
	}

}

int main()
{
	int arr [] = {2,3,4,5,4,3,2};
	int s = sizeof(arr)/sizeof(arr[0]);
	findElement(arr,s);
	
	string name ;
	cin >> name ;

	return 0;	
}
