#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool check(string str,int start,int end){
	string ktr=str;
	reverse(str.begin(), str.end());
//	cout<<ktr<<endl;
	if(str==ktr)
	return true;
	else
	return false;
	
}
int main(){
	string str;
	cin>>str;
	int k;
	cin>>k;
	int start=0;
	int count=0;
	for(int i=2;i<str.length();i++){
		string ptr = str.substr(start,i);
		if(check(ptr,start,i)){
			count++;
			i=start;
		}
	}
	if(count==k)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
}
