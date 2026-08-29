class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        sort(hours.begin(), hours.end());
        int l =0, r = hours.size()-1;

        while(l<=r){
            int mid = l+(r-l)/2;

            if(hours[mid]>=target){
                r= mid-1;
            }else{
                l = mid+1;
            }
        }
        return hours.size()-r-1;
    }
};