#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std ;

int main()
{
	string str[] = {"I","like","programming","very","much"};
	int len = sizeof(str)/sizeof(str[0]); 
	
	string res ;
	
	for(int i=len-1;i>=0;i--)
	{
		res += str[i] + " ";
	}
	
	cout<<res.substr(0,res.length()-1);
	
	return 0;
}
