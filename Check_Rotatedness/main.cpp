#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std ;

bool check_rotatedness(string str1 , string str2)
{
	if(str1.length()!=str2.length())
	{
		return false ;
	}
	
	if(str1.length()<2)
	{
		return (str1.compare(str2)==0) ;
	}
	
	string clock_wise = "" ;
	string anti_clock_wise = "" ;
	
	// Maximum 2 pass are allowed to rotate in either direction 
	
	anti_clock_wise = str2.substr(str2.length()-2,2) + str2.substr(0,str2.length()-2);
	clock_wise = str2.substr(2) + str2.substr(0,2);
	
	return (anti_clock_wise.compare(str1)==0 || clock_wise.compare(str1)==0) ;
	
}

int main()
{
	string str1 = "hello_world";
	string str2 = "llo_worldhe";
	
	cout<<"Wheather the two strings are rotatedly equal : ";
	
	check_rotatedness(str1,str2) ? cout<<"Yes"
					 			 : cout<<"No" ;
	
	return 0;
}
