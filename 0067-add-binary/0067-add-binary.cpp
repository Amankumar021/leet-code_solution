class Solution {
public:
    string addBinary(string a, string b) {
        string ans="";
        int i = a.size()-1, j=b.size()-1;
        int carry =0;

        while(i>=0 || j>= 0 || carry!=0){
            int digA =0;
            int digB =0;
            if(i>=0){
                digA = a[i]-'0';
            }
            if(j>=0){
                digB = b[j]-'0';
            }
            int sum = digA + digB +carry;
                ans+=char((sum%2)+'0');
                carry=sum/2;
                i--;
                j--;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};