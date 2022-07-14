/*
// Longest Distinct characters in string

Given a string S, find length of the longest substring with all distinct characters. 

Example 1:

Input:
S = "geeksforgeeks"
Output: 7
Explanation: "eksforg" is the longest 
substring with all distinct characters.
â€‹Example 2:

Input: 
S = "aaa"
Output: 1
Explanation: "a" is the longest substring 
with all distinct characters.

Your Task:
You don't need to read input or print anything. Your task is to complete the function longestSubstrDitinctChars() which takes the string S as input and returns the length of the longest substring with all distinct characters.


Expected Time Complexity: O(|S|).
Expected Auxiliary Space: O(K), where K is Constant.


Constraints:
1<=|S|<=105
*/

#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

int longestSubstrDistinctChars (string S)
{
    // your code here
    unordered_map<char, int> mp;
    int i = 0; 
    int j = 0;
    int n = S.length();
    int ans = 0;
    while(i < n){
        mp[S[i]]++;
        while(mp[S[i]] > 1){
            mp[S[j]]--;
            j++;
        }
        ans = max(i - j + 1, ans);
        i++;
    }
    return ans;
}