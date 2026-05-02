class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size() != t.size()) return false;
        vector<int> freq_1(26, 0);
        vector<int> freq_2(26, 0);

        for(int i=0; i<s.size(); i++){
            freq_1[s[i]-'a']++;
            freq_2[t[i]-'a']++;
        }

        for(int i=0; i<26; i++){
            if(freq_1[i] != freq_2[i]){
                return false;
            }
        }

        return true;
    }
};
