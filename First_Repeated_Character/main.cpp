#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std ;

char check_repeatedness(string &str)
{
	char c ;
	
	unordered_set<char> set ;
	
	for(int i=0;i,str.length();i++)
	{
		c = str[i] ;
		if(set.find(c)!=set.end())
		{
			return c;
		}
		else
		{
			set.insert(c);
		}
	}
	
	return '\0' ;
}

int main()
{
	string str = "Alhamdulillah" ;
	str[0] =  tolower(str[0]);
	
	cout<<check_repeatedness(str)<<endl ;
	
	return 0;
}
