class Solution {
public:

    std::string formatString(const std::string& input) {
        std::string result;
        result.reserve(input.size()); 

        for (char c : input) {
            if (std::isalnum(static_cast<unsigned char>(c))) {
                result += std::tolower(static_cast<unsigned char>(c));
            }
        }

        return result;
    }


    bool isPalindrome(string s) {
        string final = formatString(s);

        if(final == ""){
            return true;
        }

        stack<char> st;
        for(int i=0; i<final.size(); i++){
            st.push(final[i]);
        }

        for(int i=0; i<=final.size()-1; i++){
            if(final[i] != st.top()){
                return false;
            }
            st.pop();
        }

        return true;
    }
};
