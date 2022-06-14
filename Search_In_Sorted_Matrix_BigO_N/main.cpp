#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std ;

void search_in_matrix(int mat[4][4],int n,int x)
{
	if(n==0)
	{
		cout<<"Invalid Matrix !";
		return ;
	}
	
	int smallest = mat[0][0];
	int largest = mat[n-1][n-1];
	
	if(x<smallest || x>largest)
	{
		cout<<"Straight forward : Not Found !";
		return ;
	}
	
	int start_row = 0 ;
	int start_col = n-1;
	
	while( start_row<n && start_col>=0 )
	{
		int top_right = mat[start_row][start_col];
		
		if(top_right>x)
		{
			start_col--;
		}
		else if(top_right<x)
		{
			start_row++;
		}
		else
		{
			cout << "Found at position : ( " << start_row << " , " << start_col << " ) "<< endl ;
			return ; 
		}	
	}
		
	cout << "Not found in the matrix !" ;
		
	return ;
}

int main()
{
	// Note : The matrix shoud be row wise and column wise sorted 
	//        and matrix could be of any order !
	
	int mat[4][4] = { { 10, 20, 30, 40 },
                      { 15, 25, 35, 45 },
                      { 27, 29, 37, 48 },
                      { 32, 33, 39, 50 } };
                      
    int x = 29 ;
	                  
	search_in_matrix(mat,4,x);
	
	return 0 ;
}
