class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxEle = *max_element(nums.begin(), nums.end());
        int move =0;
        for(int &i : nums){
            move+=(maxEle - i);
        }

        return move;
    }
};