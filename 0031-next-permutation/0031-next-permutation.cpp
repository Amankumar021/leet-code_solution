class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int flag = -1;
        int n = nums.size();
        for(int i =n-1; i>0;i--){
            if(nums[i]>nums[i-1]){
                flag = i-1;
                break;
            }
        }

        if(flag != -1){
            int swap_idx = flag;
        for(int j =n-1; j>= flag+1;j--){
            if(nums[j]>nums[flag]){
                swap_idx = j;
                break;
            }
        } 
        swap(nums[flag], nums[swap_idx]);
        }
        reverse(nums.begin()+flag+1, nums.end());
        
    }
};