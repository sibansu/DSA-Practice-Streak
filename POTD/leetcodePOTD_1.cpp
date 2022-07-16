// 576. Out of Boundary Paths
//There is an m x n grid with a ball. The ball is initially at the position [startRow, startColumn]. You are allowed to move the ball to one of the four adjacent cells in the grid (possibly out of the grid crossing the grid boundary). You can apply at most maxMove moves to the ball.

// Given the five integers m, n, maxMove, startRow, startColumn, return the number of paths to move the ball out of the grid boundary. Since the answer can be very large, return it modulo 109 + 7.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
    int mod = 1000000007;
        int dp[m][n];
        memset(dp, 0, sizeof(dp));
        dp[startRow][startColumn] = 1;
        for(int i=0;i<maxMove;i++){
            int temp[m][n];
            memset(temp, 0, sizeof(temp));
            for(int j=0;j<m;j++){
                for(int k=0;k<n;k++){
                    if(j-1>=0){
                        temp[j][k] += dp[j-1][k];
                    }
                    if(j+1<m){
                        temp[j][k] += dp[j+1][k];
                    }
                    if(k-1>=0){
                        temp[j][k] += dp[j][k-1];
                    }
                    if(k+1<n){
                        temp[j][k] += dp[j][k+1];
                    }
                }
            }
            for(int j=0;j<m;j++){
                for(int k=0;k<n;k++){
                    dp[j][k] = temp[j][k];
                }
            }
        }
        int ans = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans += dp[i][j];
            }
        }
        return ans%mod;
    }
};