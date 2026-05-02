class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;
        for(string str : strs){
            encoded += "*" + to_string(str.size()) + "*" + str;
        }

        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i=0;
        while(i<s.size()){
            i++;
            int len = 0;
            while(i<s.size() && isdigit(s[i])){
                len = len*10 + (s[i]-'0');
                i++;
            }
            i++;
            string word = s.substr(i, len);
            res.push_back(word);

            i=i+len;
        }

        return res;
    }
};
