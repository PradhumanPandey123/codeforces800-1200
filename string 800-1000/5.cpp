#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int  main(){
		string str,ptr;
	cin>>str>>ptr;
	int cnt=0;
	int n=str.length();
	int m=ptr.length();
	int  i=n-1;
	int j=m-1;
	while(i>=0 && j>=0){
		if(str[i]==ptr[j]){
			cnt++;
		}else{
			break;
		}
		i--;
		j--;
	}
	cout<<str.length()+ptr.length()-2*cnt<<endl;
}

