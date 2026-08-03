class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int a=min(word1.size(),word2.size());
        string ans="";
        for(int i=0;i<a;i++){
            ans.push_back(word1[i]);
            ans.push_back(word2[i]);
        }
        ans.append(word1.substr(a));
        ans.append(word2.substr(a));
        return ans;
    }
};