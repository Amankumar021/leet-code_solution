class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1) return strs[0];
        string prefix = strs[0];
        for(int j=1; j<strs.size(); j++){
            string substr ="";

            int n = min(prefix.length(), strs[j].size());

            for(int i =0;i<n; i++){
                if(prefix[i]==strs[j][i]){
                    substr+=prefix[i];
                }else{
                    break;
                }
            }

            prefix = substr;

            if(substr=="")
                return substr;
        }
        return prefix;
    }
};