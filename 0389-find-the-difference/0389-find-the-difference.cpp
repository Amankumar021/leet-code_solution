class Solution {
public:
    char findTheDifference(string s, string t) {
        char c = ' ';

        for(int i =0; i<t.size(); i++){

            int pos = s.find(t[i]);
            if(pos ==string :: npos){
               return t[i];
            }

            s.erase(pos, 1);
        }
        return '\0';
    }
};