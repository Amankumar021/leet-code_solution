class Solution {
public:
    int maxVowels(string s, int k) {
        string vowel = "aeiou";
        int i=0, j=0;
        int n = s.size();
        int maxVow = 0;
        int count=0;
        while(j<n){
                 if(vowel.find(s[j])!=string::npos)
                {
                    count++;
                }
                if(j-i+1==k){
                    maxVow= max(maxVow, count);
                    if(vowel.find(s[i])!=string::npos){
                        count--;
                    }
                    i++;
                }
            j++;
        }

        return maxVow;
    }
};