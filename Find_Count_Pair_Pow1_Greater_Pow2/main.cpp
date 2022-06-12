#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int count_pairs(int a[],int b[],int s1,int s2)
{
	int zeros = 0 , ones = 0 , twos = 0 , threes = 0 , fours = 0 ;
	
	sort(a,a+s1);
	sort(b,b+s2);
	
	for(int i=0;i<s2;i++)
	{
		if(b[i]==0) zeros++;
		if(b[i]==1) ones++;
		if(b[i]==2) twos++;
		if(b[i]==3) threes++;
		if(b[i]==4) fours++;
	}
	
	int ans = 0 ;
	
	for(int j=0;j<s1;j++)
	{
		if(a[j]==0)
		{
			continue;
		}
		else if(a[j]==1)
		{
			ans+=zeros;
		}
		else if(a[j]==2)
		{
			ans = ans+zeros+ones;
			int n = (b+s2) - upper_bound(b,b+s2,2) ;
			
			ans=ans+n;
			ans=ans-threes;
			ans=ans-fours;
		}
		else if(a[j]==3)
		{
			ans = ans+zeros+ones;
			int n = (b+s2) - upper_bound(b,b+s2,3) ;
			
			ans=ans+n;
			ans=ans+twos;
		}
		else
		{
			int n = (b+s2) - upper_bound(b,b+s2,a[j]) ;
			ans=ans+n;
			ans = ans+zeros+ones;
		}
	}
		
	return ans ;
}

int main()
{
	int a[] = { 2, 1, 6 };
	int b[] = { 1, 5 };
	
	int s1 = sizeof(a)/sizeof(a[0]);
	int s2 = sizeof(b)/sizeof(b[0]);
	
	int pairs = count_pairs(a,b,s1,s2);
	
	cout<<"Total pairs with the required condition are : "<<pairs<<endl ; 
	
	return 0;
}
