#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

void find_pairs(int A[],int B[],int m,int n,int k)
{
	unordered_set<int> set;
	
	for(int i=0;i<m;i++)
	{
		set.insert(A[i]);
	}
	
	for(int j=0;j<n;j++)
	{
		if(set.find(k-B[j])!=set.end())
		{
			cout<<k-B[j]<<" "<<B[j]<<endl ;
		}
	}
	
	return ;
}

int main()
{
	int A[] = { 1, 2, 3, 7, 5, 4 };
	int B[] = { 0, 7, 4, 3, 2, 1 };
	
	int k = 8 ;
	
	int m = sizeof(A)/sizeof(A[0]);
	int n = sizeof(B)/sizeof(B[0]);
	
	find_pairs(A,B,m,n,k);
	
	return 0;
}
