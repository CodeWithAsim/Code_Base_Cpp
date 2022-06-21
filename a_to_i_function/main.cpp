#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std ;

int my_atoi(char *str)
{
	int res = 0;
	
	for(int i=0;str[i]!='\0';i++)
	{
		if(isalpha(str[i]))
		{
			return 0 ;
		}
		
		res = res * 10 + str[i] - '0' ;
	}
	
	return res;
}

int main()
{
	char str [] = "786" ;
	int res = atoi(str) ; // Built-in Function
	
	cout<<"Equivalent Integer Is ( Built-In ) : "<<res<<endl ;
	
	cout<<"Equivalent Integer Is ( User-Defined ) : "<<my_atoi(str) ; // User-Defined Function
	
	return 0 ;
}
