#include <iostream>
#include <string>
#include <unordered_map>
#include <bits/stdc++.h>

using namespace std;

void word_frequency(string s)
{
	unordered_map<string,int> umap ;
	stringstream ss(s);
	
	string word;
	
	while(ss>>word) 
	{
		umap[word]++;
	}
	
	unordered_map<string,int>::iterator itr;
	for(itr=umap.begin();itr!=umap.end();itr++)
	{
		cout << itr->first << " : " << itr->second<<endl;
	}
	
	return ;
}

int main()
{
	string s = "Hello Asim , keep working hard and hard and pray to Allah for success !";
	word_frequency(s);
	return 0;
}
