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
        int forward = 0;
        int backward = s.size() - 1;

        while(forward < backward){
            if(!isalnum(s[forward])){
                forward++;
            }

            if(!isalnum(s[backward])){
                backward--;
            }

            if(isalnum(s[forward]) && isalnum(s[backward])){
                if(tolower(s[forward]) != tolower(s[backward])){
                    return false;
                }
                forward++;
                backward--;
            }
        }

        return true;
    }
};
