#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std ;

int longest_substring(char str[],int n)
{
	unordered_map<char,int> map ;
	int start = 0 ;
	
	int len = 0 ;
	
	for(int i=0;i<n;i++)
	{
		if(map.find(str[i])!=map.end())
		{
			start = max(start,map[str[i]] +1) ;
		}
		
		map[str[i]] = i ;
		len = max(len,i-start+1) ;
	}
	
	return len;
}

int main()
{
	char str[] = "geeksforgeeks" ;
	int n = sizeof(str)/sizeof(str[0]) ;
	
	cout<<"Longest Distinct Substring : "<<longest_substring(str,n) ;
	
	return 0;
}
