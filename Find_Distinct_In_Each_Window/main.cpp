#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std ;

void find_distinct(int arr[],int s,int w)
{
	unordered_map<int , int> mp ;
	int dis_count = 0 ; 
	
	for(int i=0;i<w;i++)
	{
		if(mp[arr[i]]==0)
		{
			dis_count++;
		}
		mp[arr[i]]+=1;
	}
	
	// In first window 
	cout<<dis_count<<endl;
	
	for(int j=w;j<s;j++)
	{
		if(mp[arr[j-w]]==1)
		{
			dis_count--;
		}
		
		mp[arr[j-w]]-=1;
		
		if(mp[arr[j]]==0)
		{
			dis_count++;
		}
		mp[arr[j]]+=1;
		
		cout<<dis_count<<endl;
	}
	
	return ;
}

int main()
{
	int arr[] = { 1, 2, 1, 3, 4, 2, 3 };
	int s = sizeof(arr)/sizeof(arr[0]) ;
	
	int window_s = 4 ;
	
	find_distinct(arr,s,window_s);
	
	return 0 ;
}
