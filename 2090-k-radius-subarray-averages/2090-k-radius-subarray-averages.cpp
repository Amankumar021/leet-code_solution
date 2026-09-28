class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans(n,-1);

        int i =0, j=0;
        long long sum =0;

        while(j<n){

            sum+=nums[j];

            if(j-i+1==2*k+1){
                int valid_idx = i+k;
                ans[valid_idx] = sum/(2*k+1);  

                sum-=nums[i];
                i++;
            }
        j++;
        }

        return ans;
    }
};