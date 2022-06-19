#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std ;

char * remove_duplicate(char str[],int n)
{
	set<char> set (str,str+n-1) ;
	
	int i = 0 ; 
	
	for(auto ch:set)
	{
		str[i++] = ch ;
	}
	
	str[i]='\0';
	
	return str ;
}

int main()
{
	char str[] = "geeksforgeeks" ;
	int n = sizeof(str)/sizeof(str[0]) ;
	
	cout<<"After Duplicate Removal : "<<remove_duplicate(str,n) ;
	
	return 0;
}
