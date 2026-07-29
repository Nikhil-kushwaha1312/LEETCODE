class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int>f(26,0);
        for(auto c:s) f[c-'a']++;

        string left="",right="",mid="";
        for(int i=0;i<26;i++){
            left.append(f[i]/2,char('a'+i));
            if(f[i]%2)mid=char('a'+i);
        }
        right=left;
        reverse(right.begin(),right.end());

        return left+mid+right;
    }
};