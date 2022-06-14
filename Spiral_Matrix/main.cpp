#include <iostream>
#include <string>
#include <bits/stdc++.h>

#define R 4
#define C 4

using namespace std ;

void spiral_matrix(int m,int n,int arr[R][C])
{
	int row = 0;
	int col = 0;
	
	while(row<m&&col<n)
	{
		for(int i=col;i<n;i++)
		{
			cout<<arr[row][i]<<" , ";
		}
		
		row ++;
		
		for(int i=row;i<m;i++)
		{
			cout<<arr[i][n-1]<<" , ";
		}
		
		n -- ;
		
		if(row<m)
		{
			for(int i=n-1;i>=col;i--)
			{
				cout<<arr[m-1][i]<<" , ";
			}
		}
		
		m --;
		
		if(col<n)
		{
			for(int i=m-1;i>=row;i--)
			{
				cout<<arr[i][col]<<" , ";
			}
		}
		
		col ++;
	}
	
	return ;
}

int main()
{
	int arr[R][C] =  {{1, 2, 3, 4},
                   	  {5, 6, 7, 8},
                      {9, 10, 11, 12},
                      {13, 14, 15, 16}};
                      
	spiral_matrix(R,C,arr);
	
	return 0;
}
