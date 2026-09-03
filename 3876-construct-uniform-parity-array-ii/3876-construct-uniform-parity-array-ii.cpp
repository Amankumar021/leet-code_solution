class Solution {
public:
    bool uniformArray(vector<int>& nums1) {

        int mn = nums1[0];
        bool hasOdd = false;

        for(int x : nums1) {

            mn = min(mn, x);

            if(x % 2 != 0)
                hasOdd = true;
        }

        if(!hasOdd)
            return true;

        if(mn % 2 != 0)
            return true;

        return false;
    }
};