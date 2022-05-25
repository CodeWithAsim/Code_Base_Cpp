#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std ;

int my_compare(string x , string y)
{
	string xy = x.append(y);
	string yx = y.append(x);
	
	return xy.compare(yx)>0?1:0;	
}

void find_largest(vector<string> v)
{
	// apna comparison function lagaya hai for sorting 
	
	sort(v.begin(),v.end(),my_compare);
	
	// vector by reference pass ni hote in parameters 
	 
	for(int i=0;i<v.size();i++)
    {
    	cout<<v[i];
	}
	
	return ;
}

int main(void)
{
	vector<string> v ;
	
	v.push_back("54");
    v.push_back("546");
    v.push_back("548");
    v.push_back("60");
    
    find_largest(v);
    
	return 0;
}
