class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int minSum = INT_MAX;
        int n = nums.size();
       for(int i =0; i<n; i++){
            int sum =0;
            for(int j =i; j<n && (j-i+1<=r); j++){
                sum+=nums[j];
                if(j-i+1>=l && sum>0){
                    minSum = min(minSum, sum);
                }
            }
       }

        return minSum==INT_MAX?-1:minSum;
    }
};