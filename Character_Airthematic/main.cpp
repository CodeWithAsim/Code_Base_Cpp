#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std ;

int main()
{
	// Basically in C language , character literals are stored in int type but
	// in C++ in char type 
		  
	char ch = 'A'+ 1 ;
	int num = ch ;
	int num2 = 'B'; 
		
	cout<<ch<<endl<<num<<endl<<num2; // All prints B ;
	
	return 0 ;
}
