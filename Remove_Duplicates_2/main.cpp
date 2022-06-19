#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std ;

char * remove_duplicate(char str[],int n)
{
	int index ;
	
	for(int i=0;i<n;i++)
	{
		int j ;
		for(j=0;j<i;j++)
		{
			if(str[i]==str[j])
			{
				break ;
			}
		}
		
		if(i==j)
		{
			str[index++]=str[i];
		}
	}
	
	return str ;
}

int main()
{
	char str[] = "geeksforgeeks" ;
	int n = sizeof(str)/sizeof(str[0]) ;
	
	cout<<"After Duplicate Removal : "<<remove_duplicate(str,n) ;
	
	return 0;
}
