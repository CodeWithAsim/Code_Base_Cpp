#include <iostream>
#include <string>
#include <unordered_map>
#include <bits/stdc++.h>

using namespace std;

bool equal_array(int A[],int B[],int a,int b)
{
	if(a!=b)
	{
		return false;
	}
	
	unordered_map<int,int> umap ;
	
	for(int i=0;i<a;i++)
	{
		umap[A[i]]++;
	}
	
	for(int j=0;j<b;j++)
	{
		if(umap.find(B[j])==umap.end())
		{
			return false ;
		}
		if(umap[B[j]]==0)
		{
			return false ;
		}
		umap[B[j]]--;
	}
	return true;
}

int main()
{
	int A[] = {2,5,7,2,3,4};
	int B[] = {5,3,2,2,4,7};
	
	int a = sizeof(A)/sizeof(int);
	int b = sizeof(B)/sizeof(int);
	
	if(equal_array(A,B,a,b))
	{
		cout << "YES" ;
	}
	else
	{
		cout << "NO" ;
	}
	
	return 0;
}
