class Solution {
public:
    // define long long ll;
    long long countCommas(long long n) {
        long long sum = 0;

        long long divisor = 1000;
        while(n>=divisor){
           sum+=n-divisor+1;
           divisor*=1000;
        }

        return sum;
    }
};