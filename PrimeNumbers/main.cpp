#include <iostream>
#include <string>
#include <cmath>
using namespace std ;

void print_prime(int n)
{
	int c=1;
		
	for(int i=2;i<=10000;i++)
	{
		bool flag = true ;
		
		for(int j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
			{
				flag = false ;
				break;
			}	
		}
		
		if(flag==true&&c<=n)
		{
			cout<<i<<" ";	
			c++;
		}			
	}
}

int main()
{
	cout << "How many prime numbers you want to print ?"<<endl ;
	int n;
	cin>>n;	
	print_prime(n);
	
	return 0;
}
