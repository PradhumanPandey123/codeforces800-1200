#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
using namespace std;
long long n,i,j,k,l;
string x,y,s;
int main()
{
	cin>>s;n=s.length();
	for(i=0;i<=n;i++)
	{
		for(char j='a';j<='z';j++)
		{
			x=s.substr(0,i)+j+s.substr(i);
			y=x; reverse(x.begin(),x.end());
			if(x==y) return cout<<x,0;
		}
	}
	cout<<"NA";
} 
