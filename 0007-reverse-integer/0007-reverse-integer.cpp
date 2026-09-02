class Solution {
public:
    int reverse(int n) {
        long long rev=0;
        long long x =(n);
        while(abs(x)>0){
            long long rem = x%10;
            rev = rev*10 + x%10;
            x/=10;
        }

        if(rev>INT_MAX || rev< INT_MIN)
            return 0;

        return rev;
    }
};