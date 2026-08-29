class Solution {
public:
    bool wordPattern(string pattern, string s) {
    vector<string> words;
    string word;
    stringstream ss(s);
    // split the string in spaces
    while(ss>>word)
    {
        words.push_back(word);
    }
    if(pattern.size()!=words.size())
    {
        return false;
    }
    unordered_map<char,string>n1;
    unordered_map<string,char>n2;
    for(int i=0;i<pattern.size();i++)
    {
        char ch=pattern[i];
        string w=words[i];
        if(n1.count(ch)) {
            if(n1[ch]!=w) return false;
        } else {
            n1[ch]=w;
        }
        if(n2.count(w)) {
            if(n2[w]!=ch) return false;
        } else {
            n2[w]=ch;
        }
    }
    return true;
    }

};