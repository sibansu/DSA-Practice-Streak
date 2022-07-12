/*
// Zero Ones Equal One Zeros

Kulyash believes in equality.
Given an integer NN, output a binary string of length NN such that:

The count of 0101 subsequences in the string is equal to the count of 1010 subsequences;
The string has at least one occurrence of 00 as well as 11.
If multiple such strings exist, print any. Also, it is guaranteed that corresponding to the given input, an answer always exists.

Input Format
First line will contain TT, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, an integer NN - the length of the binary string.
Output Format
For each test case, output any binary string of length NN satisfying the given conditions.

Constraints
1 \leq T \leq 1001≤T≤100
3 \leq N \leq 10003≤N≤1000
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    if(n==3){
	        cout<<"010"<<endl;
	    }
	    if(n==4){
	        cout<<"1001"<<endl;
	    }
	    if(n>4){
	        for(int i = 0;i<n-4;i++){
	            s.push_back('0');
	        }
	        cout<<"10"<<s<<"01"<<endl;
	    }
	}
}
