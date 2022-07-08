/*
// Reverse words in a given string

Given a String S, reverse the string without reversing its individual words. Words are separated by dots.

Example 1:

Input:
S = i.like.this.program.very.much
Output: much.very.program.this.like.i
Explanation: After reversing the whole
string(not individual words), the input
string becomes
much.very.program.this.like.i
Example 2:

Input:
S = pqr.mno
Output: mno.pqr
Explanation: After reversing the whole
string , the input string becomes
mno.pqr

Your Task:
You dont need to read input or print anything. Complete the function reverseWords() which takes string S as input parameter and returns a string containing the words in reversed order. Each word in the returning string should also be separated by '.' 


Expected Time Complexity: O(|S|)
Expected Auxiliary Space: O(|S|)


Constraints:
1 <= |S| <= 2000
*/

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    string reverseWords(string S) 
    { 
        stack<string>st;
        string temp="";
        for(int i=0;i<S.size();i++){
            if(S[i]!='.'){
                temp+=S[i];
            }
            if(S[i]=='.'){;
                st.push(temp);
                temp="";
            }
        }
        st.push(temp);
        // for(int i=st.size();i>=0;i--){
        //     cout<<st[i]<<'.';
        // }
        // cout<<st[0];
        // while(st.size()!=0){
        //     cout<<st.top()<<'.';
        //     st.pop();
        // }
        string res = "";
        while(!st.empty()){
            string str = st.top();
            res += str+".";
            st.pop();
        }
        res.pop_back();
        return res;
    } 
};

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  
