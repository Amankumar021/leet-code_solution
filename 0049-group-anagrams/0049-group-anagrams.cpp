class Solution {
public:

    string generate(string &word){
        int arr[26]={0};
        for(char &ch : word){
            arr[ch-'a']++;  // increase the freq of that char to respective index
        }

        string new_word = "";
        for(int i =0; i<26; i++){
            int freq= arr[i];

            if(freq>0){
                new_word+= string(freq,i+'a');  // word formation;
            }
        }

        return new_word;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ana;
        unordered_map<string, vector<string>> mp;

        for(int i =0; i<strs.size(); i++){
            string word = strs[i];

            string new_word = generate(word);

            mp[new_word].push_back(strs[i]);
        }

        for(auto &it : mp){
            ana.push_back(it.second);
        }

        return ana;
    }
};