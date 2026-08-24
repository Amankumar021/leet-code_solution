class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(remove_if(s.begin(), s.end(), [](char c) {
            return !isalnum(c);
        }), s.end());

        for(char &m : s){
            m = tolower(m);
        }
        int l =0;
        int r = s.size()-1;

        while(l<r){
            if(s[l]==s[r]){
                l++;
                r--;
            }else{
                return false;
            }
        }

        return true;
    }
};