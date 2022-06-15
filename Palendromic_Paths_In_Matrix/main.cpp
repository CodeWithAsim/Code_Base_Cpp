#include <iostream>
#include <string>
#include <bits/stdc++.h>

// Macro-Definitions 

#define R 3
#define C 4

using namespace std ;

// Palindrom path is that in which the first and the last cell is same 
// and then second and second-last cell are same and similarly so on . 

bool isPalin(string str)
{
	int m_len = str.length()/2;
	int f_len = str.length();
	
	for(int i=0;i<m_len;i++)
	{
		if(str[i]!=str[f_len-i-1])
		{
			return false ;	
		}	
	} 
	
	return true ;
}

void palindromic_paths(string str , char mat[][C] , int r , int c , int m , int n)
{
	if(r<m-1||c<n-1)
	{
		if(r<m-1)
		{
			palindromic_paths(str+mat[r][c],mat,r+1,c,m,n);
		}
		if(c<n-1)
		{
			palindromic_paths(str+mat[r][c],mat,r,c+1,m,n);
		}
	}
	else
	{
		str = str + mat[m-1][n-1] ;
		if(isPalin(str))
		{
			cout<<str<<endl;
		}
	}
}

int main()
{
	char mat[][C] = { 
						{ 'a', 'a', 'a', 'b' },
                    	{ 'b', 'a', 'a', 'a' },
                    	{ 'a', 'b', 'b', 'a' }	
					};
		
	string str = "" ;
					
	palindromic_paths(str , mat , 0 , 0 , R , C);
	
	return 0;
}
