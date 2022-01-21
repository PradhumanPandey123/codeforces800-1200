#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve();
int LCSubStr(string X, string Y, int m, int n);
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
void solve(){
	string str="";
string ptr="";
	cin>>str>>ptr;
	int n=str.length();
	int m=ptr.length();
	int x = LCSubStr(str,ptr,n,m);
    cout<<(str.length()+ptr.length())-2*x<<endl;
}
int LCSubStr(string X, string Y, int m, int n)
{
    // Create a table to store 
    // lengths of longest
    // common suffixes of substrings.   
    // Note that LCSuff[i][j] contains 
    // length of longest common suffix 
    // of X[0..i-1] and Y[0..j-1].

    int LCSuff[m + 1][n + 1];
    int result = 0; // To store length of the
                    // longest common substring

    /* Following steps build LCSuff[m+1][n+1] in
        bottom up fashion. */
    for (int i = 0; i <= m; i++) 
    {
        for (int j = 0; j <= n; j++) 
        {
            // The first row and first column
            // entries have no logical meaning,
            // they are used only for simplicity
            // of program
            if (i == 0 || j == 0)
                LCSuff[i][j] = 0;

            else if (X[i - 1] == Y[j - 1]) {
                LCSuff[i][j] = LCSuff[i - 1][j - 1] + 1;
                result = max(result, LCSuff[i][j]);
            }
            else
                LCSuff[i][j] = 0;
        }
    }
    return result;
}

