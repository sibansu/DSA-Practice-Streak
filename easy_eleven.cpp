/*
// Wordle

Chef invented a modified wordle.

There is a hidden word SS and a guess word TT, both of length 55.

Chef defines a string MM to determine the correctness of the guess word. For the i^{th}i
th
  index:

If the guess at the i^{th}i
th
  index is correct, the i^{th}i
th
  character of MM is \texttt{G}G.
If the guess at the i^{th}i
th
  index is wrong, the i^{th}i
th
  character of MM is \texttt{B}B.
Given the hidden word SS and guess TT, determine string MM.

Input Format
First line will contain TT, number of test cases. Then the test cases follow.
Each test case contains of two lines of input.
First line contains the string SS - the hidden word.
Second line contains the string TT - the guess word.
Output Format
For each test case, print the value of string MM.

You may print each character of the string in uppercase or lowercase (for example, the strings \texttt{BgBgB}BgBgB, \texttt{BGBGB}BGBGB, \texttt{bgbGB}bgbGB and \texttt{bgbgb}bgbgb will all be treated as identical).

Constraints
1 \leq T \leq 10001≤T≤1000
|S| = |T| = 5∣S∣=∣T∣=5
S, TS,T contain uppercase english alphabets only.
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s,t,m;
	    cin>>s>>t;
	    for (int i = 0; i < s.size(); i++) {
	        /* code */
	        if(s[i]==t[i]){
	            m.push_back('g');
	        }
	        else{
	            m.push_back('b');
	        }
	    }
	    for (int i = 0; i < m.size(); i++) {
	        /* code */
	        cout<<m[i];
	    }
	    cout<<endl;
	    
	}
	return 0;
}
