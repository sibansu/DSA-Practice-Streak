/*
// Roman Number to Integer 

Given a string in roman no format (s)  your task is to convert it to an integer . Various symbols and their values are given below.
I 1
V 5
X 10
L 50
C 100
D 500
M 1000

Example 1:

Input:
s = V
Output: 5
Example 2:

Input:
s = III 
Output: 3
Your Task:
Complete the function romanToDecimal() which takes a string as input parameter and returns the equivalent decimal number. 

Expected Time Complexity: O(|S|), |S| = length of string S.
Expected Auxiliary Space: O(1)

Constraints:
1<=roman no range<=3999
*/


#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int romanToDecimal(string &str) {
        // code here
        vector<int> arr;
       for(int i=0;i<str.size();i++){
           if(str[i]=='I'){
               arr.push_back(1);
           }
           else if(str[i]=='V'){
               arr.push_back(5);
           }
           else if(str[i]=='X'){
               arr.push_back(10);
           }
           else if(str[i]=='L'){
               arr.push_back(50);
           }
           else if(str[i]=='C'){
               arr.push_back(100);
           }
           else if(str[i]=='D'){
               arr.push_back(500);
           }
           else if(str[i]=='M'){
               arr.push_back(1000);
           }
       }
       for(int i=0;i<arr.size()-1;i++){
           if(arr[i]<arr[i+1]){
               arr[i] = -arr[i];
           }
       }
       int sum = 0;
       for(int i=0;i<arr.size();i++){
           sum += arr[i];
       }
       return sum;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
} 
