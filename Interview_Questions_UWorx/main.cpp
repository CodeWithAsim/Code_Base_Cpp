#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std ;

int main()
{
	//Question - 1
	
	string str = "hello world asim" ;
	stringstream ss(str) ;
	string word ;
	while(ss>>word)
	{
		word[0] = toupper(word[0]);	
		cout<< word <<" ";
	}

	// Question - 1 - Method - 2

	for(int i=0;i<str.length();i++)
	{
		if(isspace(str[i]))
		{
			cout<<"space"<<endl;
		}
		else if(!isalpha(str[i]))
		{
			cout<<"numeric"<<endl;
		}
		else
		{
			str[i]=toupper(str[i]);
		}
	}
	cout<<str<<endl;

	// Question - 2

	int number ;
	cout<<"Enter any number to be converted into string : ";
	cin>> number ;	
	stringstream ss;
	ss<<number;
	string str ; 
	ss>>str ;
	str = str+" ! ";
	cout<<str<<endl;

	// Question - 2 - Method - 2

	int number  = 100 ;
	string str =  to_string(number);
	str=str+" ! ";
	cout<<str<<endl;

	// Question - 3

	int mixture = 123 ;	
	int hours = mixture/60 ;
	int minutes = mixture%60 ;
	
	cout<<hours<<":" ;
	cout<<minutes ;
	
	return 0;	
}
