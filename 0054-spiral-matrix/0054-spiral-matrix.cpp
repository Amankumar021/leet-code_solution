class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();
        int dir =0;
       

       int left = 0, right = col-1;
       int top =0, down = row-1;
        while(left<=right && top<=down){
            if(dir==0){
                for(int i =left; i<=right; i++){
                    ans.push_back(matrix[top][i]);
                }
                top++;
            }

            if(dir==1){
                for(int i = top; i<=down; i++){
                    ans.push_back(matrix[i][right]);
                }
                right--;
            }
            if(dir==2){
                for(int i =right;i>=left; i--){
                    ans.push_back(matrix[down][i]);
                }
                down--;
            }

            if(dir==3){
                for(int i =down; i>=top; i--){
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }

            dir++;

            if(dir==4){
                dir=0;
            }
        }
    return ans;
    }
};