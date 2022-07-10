/*
// Convert a sentence into its equivalent mobile numeric keypad sequence

Given a sentence in the form of a string in uppercase, convert it into its equivalent mobile numeric keypad sequence.

\wp-content\uploads\Phone.png

Example 1:

Input:
S = "GFG"
Output: 43334
Explanation: For 'G' press '4' one time.
For 'F' press '3' three times.
Example 2:

Input:
S = "HEY U"
Output: 4433999088
Explanation: For 'H' press '4' two times.
â€‹For 'E' press '3' two times. For 'Y' press '9' 
three times. For white space press '0' one time.
For 'U' press '8' two times.
 

Your Task:  
You dont need to read input or print anything. Complete the function printSequence() which takes a string as input parameter and returns its equivalent mobile numeric keypad sequence as a string.
 

Expected Time Complexity: O(Length of String)
Expected Auxiliary Space: O(Length of String)
 

Constraints:

1 <= Length of String <= 105
Characters of string can be empty space or capital alphabets.
*/

#include <bits/stdc++.h>
using namespace std;
string printSequence(string input);

int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
    {
        string s;
        getline(cin,s);
        cout<<printSequence(s)<<endl;
    }
	return 0;
}


string printSequence(string S)
{
    map<char,string> mp;
   mp['A']="2";
   mp['B']="22";
   mp['C']="222";
   mp['D']="3";
   mp['E']="33";
   mp['F']="333";
   mp['G']="4";
   mp['H']="44";
   mp['I']="444";
   mp['J']="5";
   mp['K']="55";
   mp['L']="555";
   mp['M']="6";
   mp['N']="66";
   mp['O']="666";
   mp['P']="7";
   mp['Q']="77";
   mp['R']="777";
   mp['S']="7777";
   mp['T']="8";
   mp['U']="88";
   mp['V']="888";
   mp['W']="9";
   mp['X']="99";
   mp['Y']="999";
   mp['Z']="9999";
   mp[' ']="0";
   string s="";
   for(int i=0; i<S.length(); i++){
       s+=mp[S[i]];
   }
   return s;
}
