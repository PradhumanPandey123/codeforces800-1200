// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// return the smallest window in S with all the characters of P
// if no such window exists, return "-1" 

#define NO_OF_CHARS 256
class Solution{
    public:
    string smallestWindow (string s, string p){
        
    int Slen = s.length();
    int Tlen = p.length();
 
    // check if string's length is less than T's
    // length. If yes then no such window can exist
    if (Slen < Tlen)
    {
        return "-1";
    }
 
    int S_count[NO_OF_CHARS] = {0};
    int T_count[NO_OF_CHARS] = {0};
 
    // store occurrence of characters of 't'
    for (int i = 0; i < Tlen; i++)
        T_count[p[i]]++;
 
    int start = 0, start_index = -1, min_len = INT_MAX;
 
    // start traversing the string
    int count = 0;  // count of characters
    for (int i = 0; i < Slen ; i++)
    {
        // count occurrence of characters of string
        S_count[s[i]]++;
 
        // If s's char matches with t's char
        // then increment count
        if (T_count[s[i]] != 0 &&
            S_count[s[i]] <= T_count[s[i]] )
            count++;
 
        // if all the characters are matched
        if (count == Tlen)
        {
            //minimizng the current window
            //If the current window has a character which occured more number of times
            //than the character in T string, then remove starting chars
            while ( S_count[s[start]] > T_count[s[start]]
                   || T_count[s[start]] == 0)
            {
 
                if (S_count[s[start]] > T_count[s[start]])
                    S_count[s[start]]--;
                start++;
            }
 
            // update window size
            int len_window = i - start + 1;
            if (min_len > len_window)
            {
                min_len = len_window;
                start_index = start;
            }
        }
    }
 
    // If no window found
    if (start_index == -1)
    {
       return "-1";
    }
 
    // Return substring starting from start_index
    // and length min_len
    return s.substr(start_index, min_len);
    }
};

// { Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string pat;
        cin>>pat;
        Solution obj;
        cout<<obj.smallestWindow(s, pat)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends
