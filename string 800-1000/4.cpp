#include<iostream>
#include<bits/stdc++.h>
void solve();
using namespace std;
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
	vector<int>cntt(26);
	for(int i=0;i<ptr.length();i++){
		cntt[ptr[i]-'a']++;
	}
	for(int i=0;i<str.length();i++){
		vector<int>cntp(26);
		for(int j=i;j<ptr.length();j++){
			cntp[str[j]-'a']++;
			if(cntt==cntp){
				cout<<"YES"<<endl;
				return;
			}
		}
	
	}
	cout<<"NO"<<endl;
}
