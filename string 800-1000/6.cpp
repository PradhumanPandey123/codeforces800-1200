#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
string reverse(string str,int i,int j){
	while(i<=j){
		swap(str[i++],str[j--]);
	}
	return str;
}
int main(){
	string str;
	cin>>str;
	string p,q;
	int i=0;
	int j=str.length()-1;
	string ptr = reverse(str,0,str.length()-1);
	if(str!=ptr){
		cout<<str.length()<<endl;
		return 0;
	}
	  
	while(j>=0){
		 p = str.substr(i,j);
		 q = reverse(p,0,p.length()-1);
		if(p==q){
			j--;
			continue;
		}else{
			break;
		}
	}
	cout<<p.length()<<endl;
}

