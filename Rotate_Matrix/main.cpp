#include <iostream>
#include <string>
#include <bits/stdc++.h>

#define R 4
#define C 4

using namespace std;

void rotate_matrix(int m,int n,int arr[R][C])
{
	int row , col = 0 ;
	int prev , cur ;
	
	while(row<m&&col<n)
	{
		if(row+1==m||col+1==n)
		{
			break;
		}
		
		prev = arr[row+1][col];
		
		for(int i=col;i<n;i++)
		{
			cur = arr[row][i];
			arr[row][i] = prev ;
			prev = cur ;
		}
		
		row++;
		
		for(int i=row;i<m;i++)
		{
			cur = arr[i][n-1];
			arr[i][n-1] = prev ;
			prev = cur ;
		}
		
		n--;
		
		if(row<m)
		{
			for(int i=n-1;i>=col;i--)
			{
				cur = arr[m-1][i];
				arr[m-1][i] = prev ;
				prev = cur ;
			}
		}
		
		m--;
		
		if(col<n)
		{
			for(int i=m-1;i>=row;i--)
			{
				cur = arr[i][col];
				arr[i][col] = prev ;
				prev = cur ;
			}
		}
			
		col++;
		
	}
	
	// Printing the array 
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return ;
}

int main()
{
	int arr[R][C] = { 
					  {1, 2, 3, 4} ,
                      {5, 6, 7, 8} ,
                      {9, 10, 11, 12} ,
                      {13, 14, 15, 16}
					};
	
	rotate_matrix(R,C,arr);
	
	return 0;
}
