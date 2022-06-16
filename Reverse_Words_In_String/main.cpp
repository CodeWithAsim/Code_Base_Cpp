#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std ;

void reverse_words(string str)
{
	vector<string> v ;
	string s = "" ;
	
	for(int i=0;i<str.length();i++)
	{
		if(str[i]==' ')
		{
			v.push_back(s);
			s="";
		}
		else
		{
			s+=str[i];
		}
	}
	
	v.push_back(s);
	
	for(int i=v.size()-1;i>0;i--)
	{
		cout<<v[i]<<" ";
	}
	
	cout<<v[0]<<endl;
	
	return ;
}

int main()
{
	string str = "Getting good at coding requires a lot of practice";	
	reverse_words(str);
	
	return 0;
}

