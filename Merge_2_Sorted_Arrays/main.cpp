#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std ;

void sort_arrays(int A[],int B[],int n1,int n2)
{
	map<int,bool> m;
	
	for(int i=0;i<n1;i++)
	{
		m[A[i]] = true ;	
	}
	for(int j=0;j<n1;j++)
	{
		m[B[j]] = true ;	
	}
	
	for(auto e:m)
	{
		cout<<e.first<<" " ;
	}
	
	return ;
}

int main ()
{
	int A [] = {0,1,2,3,4};
	int B [] = {5,6,7,8,9};
	
	int n1 = sizeof(A)/sizeof(A[0]);
	int n2 = sizeof(B)/sizeof(B[0]);
	
	sort_arrays(A,B,n1,n2);
	 
	return 0;
}
