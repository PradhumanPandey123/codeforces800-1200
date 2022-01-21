#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int check(string str,string ptr,int m){
	int i=0;
	int j=0;
	int count=0;
	while(i<m &&j<m){
		if(str[i]!=ptr[j]){
			count++;
		}
		i++;
		j++;
	}
	return count;
}

int main(){
	int n,m;
	cin>>n>>m;
	string str,ptr;
	int mn=INT_MAX;
	cin>>str>>ptr;
	int ind=0;
	for(int i=0;i<m-n+1;i++){
		string ktr = ptr.substr(i,n);
//		cout<<ktr<<endl;
		int x = check(str,ktr,n);
//		cout<<x<<endl;
		if(mn>x){
			mn=x;
			ind=i;
		}
	}
	int j=0;
	string p=ptr.substr(ind,n);
//	cout<<p<<endl;
		cout<<mn<<endl;
		while(j<n){
			if(p[j]!=str[j])
			cout<<j+1<<" ";
			j++;
		}
}
