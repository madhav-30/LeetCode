class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string ans="";
        if (str1 + str2 != str2 + str1) return ans;
        int max = gcd(str1.length(), str2.length());
        for(int i=0; i<max; i++) ans+=str1[i];
        return ans;
    }
};
