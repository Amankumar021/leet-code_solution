class Solution {
public:
    int maxDepth(string s) {
        int count =0;
        int maxCount=0;
        for(int i =0; i<s.size(); i++){
            if(s[i]=='('){
            count++;
            }
        
            if(s[i]==')'){
                maxCount = max(maxCount,count);
                count--;
            }
        }

        return maxCount;
        
    }
};