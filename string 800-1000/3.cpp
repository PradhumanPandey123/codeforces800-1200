#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int lcs(string str,string ptr,int n,int m);
void solve();
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
void solve(){
	string str,ptr;
	cin>>str>>ptr;
	int n=str.length();
	int m=ptr.length();
	int x = lcs(str,ptr,n,m);
	cout<<str.length()+ptr.length()-2*x<<endl;
}
int lcs(string str,string ptr,int n,int m){
	int table[n+1][m+1];
	int result=0;
	
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			if(i==0 || j==0)
			table[i][j]=0;
			else if(str[i-1]==ptr[j-1]){
				table[i][j]=1+table[i-1][j-1];
	            result = max(result,table[i][j]);
			}else{
				table[i][j]=0;
			}
		}
	}
	return result;
}
