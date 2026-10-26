class Solution {
public:
    int row, col;
    vector<vector<int>> direction = {{0,1},{0,-1}, {1,0}, {-1,0}};

    long long dfs(vector<vector<int>>& grid, int i, int j){
        long long sum =grid[i][j];
        grid[i][j]=0;

        for(vector<int>& dir: direction){
            int i_ = i + dir[0];
            int j_ = j + dir[1];

            if(i_>=0 && i_<row && j_>=0 && j_<col && grid[i_][j_]>0){
                sum+=dfs(grid, i_,j_);
            }
        }

        return sum;
    }
    int countIslands(vector<vector<int>>& grid, int k) {
        int count =0;

        row = grid.size();
        col = grid[0].size();

        for(int i =0; i<row; i++){
            for(int j =0; j<col; j++){
                if(grid[i][j]>0){
                   long long sum = dfs(grid, i, j);
                   if(sum%k==0)
                    count+=1;
                   
                }
            }
        }
        return count;
    }
};