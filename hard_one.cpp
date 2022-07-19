/*
// Count Smaller elements

Given an array Arr of size N containing positive integers. Count number of smaller elements on right side of each array.

Example 1:

Input:
N = 7
Arr[] = {12, 1, 2, 3, 0, 11, 4}
Output: 6 1 1 1 0 1 0
Explanation: There are 6 elements right
after 12. There are 1 element right after
1. And so on.
Example 2:

Input:
N = 5
Arr[] = {1, 2, 3, 4, 5}
Output: 0 0 0 0 0
Explanation: There are 0 elements right
after 1. There are 0 elements right after
2. And so on.
Your Task:
You don't need to read input or print anything. Your task is to complete the function constructLowerArray() which takes the array of integers arr and n as parameters and returns an array of integers denoting the answer.

Expected Time Complexity: O(N*logN)
Expected Auxiliary Space: O(N)

Constraints:
1 ≤ N ≤ 106
0 ≤ Arri  ≤ 108
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
	vector<int> constructLowerArray(int arr[], int n) {
	    vector<int>vec(n,0);
	    if(n == 0 || n == 1){
          return vec;
        }
        vector<int>temp;
        temp.push_back(arr[n-1]);
        for(int i=n-2;i>=0;i--){
            int ind = lower_bound(temp.begin(),temp.end(),arr[i])-temp.begin();
            vec[i]=ind;
            
            temp.insert(temp.begin()+ind,arr[i]);
        }
        return vec;
	}
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.constructLowerArray(arr, n);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}