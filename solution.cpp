class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int r = obstacleGrid.size(), c = obstacleGrid[0].size();
         vector<vector<int>> t(r+1, vector<int>(c+1));
        for(int i=0; i<=r; i++) {
            for(int j=0; j<=c; j++) {
                if(i ==0 || j==0) {
                    t[i][j] = 0;
                }
                else if(obstacleGrid[i-1][j-1] == 1) {
                    t[i][j] = 0;
                }
                else if(i==1 && j== 1) {
                    t[i][j] = 1;
                }
                else {
                    t[i][j] = t[i-1][j] +t[i][j-1];
                }
            }
        }
        return t[r][c];
    }
};
