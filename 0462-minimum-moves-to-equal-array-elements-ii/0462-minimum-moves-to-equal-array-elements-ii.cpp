class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int midEle = nums[n/2];
        int move =0;
        for(int &i: nums){
            move+=(abs(i-midEle));
        }

        return move;
    }
};