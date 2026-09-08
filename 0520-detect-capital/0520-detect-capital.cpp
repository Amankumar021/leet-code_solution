class Solution {
public:
    bool detectCapitalUse(string word) {
        int count =0;
        int n = word.size();
        for(int i =0; i<n; i++){
            if(word[i]<=90 && word[i]>=65){
                count++;
            }
        }
        if(count==n || count ==0) return true;

        if(count ==1 && (word[0]>=65 && word[0]<=90)) return true;
        return false;
    }
};