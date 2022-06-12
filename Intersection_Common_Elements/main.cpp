#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

void  find_common(int a[],int b[],int c[],int s1,int s2,int s3)
{
	unordered_set<int> set1,set2,set3;
	
	for(int i=0;i<s1;i++)
	{
		set1.insert(a[i]);
	}
	
	for(int j=0;j<s2;j++)
	{
		set2.insert(b[j]);
	}
	
	for(int k=0;k<s3;k++)
	{
		if(set1.find(c[k])!=set1.end()
		   && set2.find(c[k])!=set2.end())
		   {
		   		set1.erase(c[k]);
		   		set2.erase(c[k]);
		   		
		   		cout<<c[k]<<" ";
		   }
	}
}

int main()
{
	int a[] = { 5, 5, 10, 20, 40, 80 };
    int b[] = { 5, 5, 20, 80, 100 };
    int c[] = { 5, 5, 15, 20, 30, 70, 80, 120 };
	
	int s1 = sizeof(a)/sizeof(a[0]);
	int s2 = sizeof(b)/sizeof(b[0]);
	int s3 = sizeof(c)/sizeof(c[0]);
	
	cout<<"The common elements are : " <<endl;
	find_common(a,b,c,s1,s2,s3);
	
	return 0;
}
