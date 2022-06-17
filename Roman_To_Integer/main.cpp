#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std ;

int convert(string &str)
{
	map<char,int> m ;
	
	m.insert({'I',1});
	m.insert({'V',5});
	m.insert({'X',10});
	m.insert({'L',50});
	m.insert({'C',100});
	m.insert({'D',500});
	m.insert({'M',1000});
	
	int num ;
	
	for(int i=0;i<str.length();i++)
	{
		if(m[str[i]] < m[str[i+1]])
		{
			num+=m[str[i+1]]-m[str[i]];
			i++;
			continue;
		}
		num += m[str[i]];
	}
	
	return num ;
}

int main()
{
	string str = "MCMIV" ;
	
	int n = convert(str) ;
	
	cout<<str <<" - integer equivalent is - "<<n;
	
	return 0;
}
