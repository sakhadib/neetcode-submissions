class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        for(string str : strs){
            int len = str.size();
            string s = to_string(len);
            s = string(5 - s.size(), '0') + s;

            s = s + str;

            res += s;
        }

        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;

        int i = 0;

        while(i < s.size()){
            string curr_len = "";
            for(int j=i; j<i+5; j++){
                curr_len += s[j];
            }

            i = i + 5;

            int len = stoi(curr_len);
            string str = "";
            for(int j=i; j<i+len; j++){
                str += s[j];
            }

            i = i + len;

            res.push_back(str);
        }

        return res;
        
    }
};
