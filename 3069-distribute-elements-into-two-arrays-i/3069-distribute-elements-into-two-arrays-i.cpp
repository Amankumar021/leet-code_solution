class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> a1;
        vector<int> a2;
        int j =0;
        int k =1;
        int n = nums.size();
        a1.push_back(nums[0]);
        a2.push_back(nums[1]);
        for(int i=2; i<n; i++){
            if(nums[j]>nums[k]){
                a1.push_back(nums[i]);
                j=i;
            }else{
                a2.push_back(nums[i]);
                k=i;
            }
        }
        a1.insert(a1.end(),a2.begin(),a2.end());
        return a1;
    }
};