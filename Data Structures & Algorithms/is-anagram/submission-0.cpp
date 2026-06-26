class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        unordered_map<char, int> CountS;
        unordered_map<char, int> CountT;
        int size = s.length();

        for(int i =0; i<size;i++ ){
            CountS[s[i]]++;
            CountT[t[i]]++;
        }
        return CountS == CountT;
    }
};
