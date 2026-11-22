class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int leftMax = nums[0];
        int maxSoFar = nums[0];

        int n = nums.size();
        int leftSize = 1;

        for(int i =1; i<n; i++){
            maxSoFar = max(maxSoFar, nums[i]);

            if(nums[i] < leftMax) {
                leftMax = maxSoFar;
                leftSize = i + 1;
            }
        }

        return leftSize;
    }
};