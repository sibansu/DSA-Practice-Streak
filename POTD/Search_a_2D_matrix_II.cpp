/*
// 240. Search a 2D Matrix II
*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int i= n-1;
        int j=0;
        
        while(i>=0 && j<matrix[0].size()){
            if(matrix[i][j]==target){
                return true;
            }
            else if(matrix[i][j]<target){
                j++;
            }
            else if(matrix[i][j]>target){
                i--;
            }
        }
        return false;
    }
};