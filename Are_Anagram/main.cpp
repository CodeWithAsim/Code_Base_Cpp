#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std ;

bool are_anagram(string str1 , string str2)
{
	int l1 = str1.length();
	int l2 = str2.length();
	
	if(str1.length() != str2.length())
	{
		return false ;
	}
	
	sort(str1.begin(),str1.end());
	sort(str2.begin(),str2.end());	
	
	return str1.compare(str2) == 0 ;
}

int main()
{
	string str1 = "listen";
	string str2 = "silent";
	
	cout<<"Are they Anagram ? "<<endl ;
	
	are_anagram(str1,str2) ? cout<<"Yes"
						   : cout<<"No" ;
	
	return 0 ;
}
