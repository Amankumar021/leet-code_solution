class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size();
        int m = t.size();

        if(m>n)
            return "";

        unordered_map<char, int> mp;

        for(char &ch : t){
            mp[ch]++;
        }

        int j =0, i=0;
        int minwindowSize = INT_MAX;
        int start_i =0;
        int reqCount = m;

        while(j<n){
            char ch = s[j];

            if(mp[ch]>0){
                reqCount--;
            }

            mp[ch]--;

            while(reqCount ==0){
                int currWindow = j-i+1;
                if(minwindowSize>currWindow){
                    minwindowSize = currWindow;
                    start_i = i;
                }

                mp[s[i]]++;
                if(mp[s[i]]>0){
                    reqCount++;
                }
                i++;
            }
            j++;
        }

        return minwindowSize == INT_MAX ? "" : s.substr(start_i, minwindowSize);
    }
};