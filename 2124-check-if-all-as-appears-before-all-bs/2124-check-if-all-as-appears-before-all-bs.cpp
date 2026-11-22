class Solution {
public:
    bool checkString(string s) {

        for(int i =0; i<s.size(); i++){
            if(s[i]=='b'){
                int j =i+1; 
                while(j<s.size()){
                    if(s[j]=='a'){
                        return false;
                    }
                    j++;
                }
                break;
            }
        }

        return true;
    }
};