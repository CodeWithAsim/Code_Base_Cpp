#include <iostream>
#include <string>
#include <unordered_map>

using namespace std ;

void find_subarray(int arr[],int n,int sum)
{
	unordered_map<int,int> mp ;
	int cur_sum = 0 ;
	
	for(int i=0; i<n; i++)
	{
		cur_sum += arr[i];
		if(cur_sum==sum)
		{
			cout<<"Sub_Array found between indexes "<<0<<" and "<<i<<endl;
			return;
		}
		if(mp.find(cur_sum-sum)!=mp.end())
		{
			cout<<"Sub_Array found between indexes "<<mp[cur_sum]+1<<" and "<<i<<endl;
			return;
		}
		mp[cur_sum]=i;
	}
	
	return ;
}

int main()
{
	int arr[]={10, 2, -2, -20, 10};
	int n=sizeof(arr)/sizeof(arr[0]);
	int sum =-10;
	
	find_subarray(arr,n,sum);
	
	return 0;
}
