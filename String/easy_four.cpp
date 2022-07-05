/*
// Longest Common Prefix in an Array

Given a array of N strings, find the longest common prefix among all strings present in the array.


Example 1:

Input:
N = 4
arr[] = {geeksforgeeks, geeks, geek,
         geezer}
Output: gee
Explanation: "gee" is the longest common
prefix in all the given strings.
Example 2:

Input: 
N = 2
arr[] = {hello, world}
Output: -1
Explanation: There's no common prefix
in the given strings.

Your Task:
You don't need to read input or print anything. Your task is to complete the function longestCommonPrefix() which takes the string array arr[] and its size N as inputs and returns the longest common prefix common in all the strings in the array. If there's no prefix common in all the strings, return "-1".


Expected Time Complexity: O(N*max(|arri|)).
Expected Auxiliary Space: O(max(|arri|)) for result.


Constraints:
1 ≤ N ≤ 103
1 ≤ |arri| ≤ 103
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        string s;
        sort(arr,arr+N);
        int n  = arr[N-1].length();
        for(int i=0;i<n;i++){
            string s1=arr[0];
            string s2 = arr[N-1];
            if(s1[i]==s2[i]){
                s.push_back(s1[i]);
            }
            else{break;};
        }
        if(s=="")
        return "-1";
        
        return s;
    }
};

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}
