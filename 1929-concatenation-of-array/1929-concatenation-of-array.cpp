class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> nums2;
        int n =2;
        while(n>0){
            for(int &i: nums){
                nums2.push_back(i);
            }
            n--;
        }

        return nums2;
    }
};