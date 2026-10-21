class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> numset;

        for(int n : nums){
            numset.insert(n);
        }

        int longest = 0;

        for(int n : nums){
            if(!numset.contains(n-1)){
                int len = 0;

                while(numset.contains(n+len)){
                    len += 1;
                }

                longest = max(len, longest);
            }

        }

        return longest;

    }
};
