class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        char min_char = *min_element(begin(s), end(s)); 
        char max_char = *max_element(begin(s), end(s)); 

        if(is_sorted(begin(s), end(s))){
            return 0;
        }
        
        if(n==2){
            return -1;
        }

        if(min_char == s[0] || max_char ==s[n-1]){
            return 1;
        }

        char min_mid = *min_element(begin(s)+1, end(s)-1);
        char max_mid = *max_element(begin(s)+1, end(s)-1);

        if(s[0] > max_mid && s[n-1] < min_mid){
            return 3;
        }else{
            return 2;
        }
        

        return -1;
    }
};