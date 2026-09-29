class Solution {
public:
    
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int zCount =0;
        int i =0, j=0;
        int maxLength =0;

        for(int j=0; j<n; j++){
            if(nums[j]==0){
                zCount++;

                while(zCount>1){
                    if(nums[i]==0)
                        zCount--;
                    i++;           
                }
            }

            maxLength = max(maxLength, j-i);
        }

        return maxLength;
    }
};