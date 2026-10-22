class Solution {
public:
    string normalize(string s) {
        string r;
        for (unsigned char c : s)
            if (isalnum(c)){
                r += tolower(c);
            }
        return r;
    }

    bool isPalindrome(string s) {
        string st = normalize(s);

        stack<char> ss;

        for(char c : st){
            ss.push(c);
        }

        int it = 0;

        while(!ss.empty()){
            if(ss.top() != st[it]){
                return false;
            }

            it++;
            ss.pop();
        }

        return true;
    }
};
