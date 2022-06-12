#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int b[] = { 1, 5 ,3,4,5,6,7};
	int s2 = sizeof(b)/sizeof(b[0]);	
	
	int n = (b+s2) - upper_bound(b,b+s2,4) ;
	
	cout<<n<<endl;
		
	return 0;
}
