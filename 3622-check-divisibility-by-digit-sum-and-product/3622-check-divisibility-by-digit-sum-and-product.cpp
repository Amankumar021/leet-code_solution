class Solution {
public:
    bool checkDivisibility(int n) {
        int sum =0;
        int prd =1;
        int dig = n;
        while(n>=1){
            int rem = n%10;
            sum+=rem;
            prd*=rem;
            n/=10;
        }
        return (dig%(sum +prd))==0;
    }
};