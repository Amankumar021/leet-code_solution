class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int i =0, j=0;
        int distcount =0;
        int n = nums.size();
        for(int i =0; i<n; i++){
            string s = "";
            int count =0;
            for(int j =i; j<n; j++){
                if(s.find(nums[j])==string::npos){
                    char ch = nums[j];
                    s+=ch;
                    count++;
                }
                distcount+=(pow(count,2));
            }
        }

        return distcount;
    }
};