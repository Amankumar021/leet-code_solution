class Solution {
public:

    typedef long long ll;

    ll getSum(ll count, ll x){
        return (count*x) - (count*(count+1))/2;
    }
    int maxValue(int n, int index, int maxSum) {

        ll left =1;
        ll right = maxSum;

        ll mid_val;

        int result =0;
        while(left<=right){
            mid_val = left+(right-left)/2;

            // left sum

            ll left_count = min((ll)index, mid_val-1);
            ll leftSum = getSum(left_count, mid_val);
            leftSum+=max((ll)0, index - (mid_val-1)); // extra one

            // right sum
            ll right_count = min((ll)n-index-1, mid_val-1);

            ll rightSum = getSum(right_count, mid_val);

            rightSum+=max((ll)0, n-index-1 -(mid_val-1)); // extra one

            ll totalSum = leftSum + mid_val + rightSum;
            if(totalSum <= maxSum){
                result = max((ll)result, mid_val);
                left = mid_val+1;
            }else{
                right = mid_val-1;
            }
        }
        return result; 
        }
};