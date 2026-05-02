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

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;

        result.push_back({strs[0]});
        bool flag = false;

        for(int i=1; i<strs.size(); i++){
            for(int j=0; j<result.size(); j++){
                if(isAnagram(result[j][0], strs[i])){
                    result[j].push_back(strs[i]);
                    flag = true;
                }
            }
            if(flag == true){
                flag = false;
            }else{
                result.push_back({strs[i]});
            }
        }

        return result;
    }
};
