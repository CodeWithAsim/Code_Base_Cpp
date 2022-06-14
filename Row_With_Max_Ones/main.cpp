#include <iostream>
#include <string>
#include <bits/stdc++.h>

#define R 4
#define C 4

using namespace std ;

int first(bool arr[],int l,int h)
{
	if(h>=l)
	{
		int m = l+(h-l)/2;
	
		if((m==0||arr[m-1]==0) && arr[m]==1)
		{
			return m;
		}
		else if(arr[m]>0)
		{
			return first(arr,l,m-1);
		}
		else
		{
			return first(arr,m+1,h);
		}
		
	}	
	
	return -1;
}

int row_with_max_ones(bool mat[R][C])
{
	int row_index = -1 ;
	int max_count = -1 ;
	
	for(int i=0;i<R;i++)
	{
		int f_index = first(mat[i],0,C-1);
		
		if(f_index!=-1 && C-f_index>max_count)
		{
			max_count = C-f_index;
			row_index = i;
		}
	}
		
	return row_index;
}

int main()
{
	bool mat [R][C] = { {0, 0, 0, 1},
                        {0, 1, 1, 1},
                        {1, 1, 1, 1},
                        {0, 0, 0, 0} };
	
	int row = row_with_max_ones(mat);
	
	if(row!=-1)
	{
		cout<<"Row with maximum 1s is : "<<row;
	}
	else
	{
		cout<<"No row has the 1 entry ! OPPS !";
	}
	
	return 0;
}
