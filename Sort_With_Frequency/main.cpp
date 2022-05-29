#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std ;

bool my_compare(pair< int , pair< int , int > > p1 ,
				pair< int , pair< int , int > > p2  )
{				
	if(p1.second.second != p2.second.second)
	{
		return (p1.second.second > p2.second.second);  // comparing counts		 	
	}				 	
	else
	{
		return (p1.second.first < p2.second.first);  // comparing indexes
	}
}

void sort_by_freq(int arr[],int n)
{
	unordered_map< int , pair<int,int> > mp ;
	
	// storing the elements with (element itself - <index,count>) in hash map 
	for(int i=0;i<n;i++)
	{
		if(mp.find(arr[i])!=mp.end())
		{
			mp[arr[i]].second++;
		}
		else
		{
			mp[arr[i]] = make_pair(i,1);
		}
	}
	
	// storing the elements of map in the vector for getting final sorted vector
	vector< pair< int , pair< int , int > > > v ;
	
	auto it = mp.begin();
	
	for(it;it!=mp.end();it++)
	{
		v.push_back(make_pair(it->first,it->second)) ;
	}
	
	//sorting the elements in the vector 
	sort(v.begin(),v.end(),my_compare) ;
	
	// remember - vector's iterator has no v.first and v.second - its only available in the case of map's iterator
	for(int i=0 ; i<v.size() ; i++)
	{
		int count = v[i].second.second;
		
		while(count) // can be while(count--)
		{
			cout << v[i].first << " ";
			count -- ;
		}
	}
	
	return ;
}

int main()
{
	int arr [] = { 2, 5, 2, 6, -1, 9999999, 5, 8, 8, 8 } ;
	int n = sizeof(arr)/sizeof(arr[0]) ;
	
	sort_by_freq(arr,n);
	
	return 0;
}
