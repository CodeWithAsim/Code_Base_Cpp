#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std ;

int find_four_elements(int arr[],int s,int x)
{
	unordered_map<int , pair<int,int>> mp ;
	
	for(int i=0;i<s-1;i++)
	{
		for(int j=i+1;j<s;j++)
		{
			mp[arr[i]+arr[j]] = {i,j} ;
		}		
	}
	
	for(int i=0;i<s-1;i++)
	{
		for(int j=i+1;j<s;j++)
		{
			int sum = arr[i]+arr[j]	;
			
			if(mp.find(x-sum)!=mp.end())
			{
				pair<int,int> p = mp[x-sum];
				
				if(p.first!=i&&p.first!=j&&p.second!=i&&p.second!=j)
				{
					cout<<arr[i]<<" "<<arr[j]<<" "<<arr[p.first]<<" "<<arr[p.second]<<endl;
					
					return 1;
				}			
			}		
		}		
	}
		
	return -1;
}

int main()
{
	int arr[] = { 10, 20, 30, 40, 1, 2 } ;
	int s = sizeof(arr)/sizeof(arr[0]) ;
	
	int x = 91;
	
	int res = find_four_elements(arr,s,x);
	
	if(res==-1)
	{
		cout<<"No such four numbers exist in the array with sum : "<<x;
	}
	
	return 0;
}
