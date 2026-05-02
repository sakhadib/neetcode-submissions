class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int x=1;
        int zeros = 0;
        for (int i=0; i<nums.size(); i++){
            if(nums[i] != 0){
                x = x*nums[i];
            }
            else{
                zeros++;
            }
        }

        // more than 1 zero makes everything zero
        if(zeros > 1){
            vector<int> res(nums.size(), 0);
            return res;
        } 

        // 1 zero keeps that index filled. others 0. except this all normal
        if(zeros == 1){
            vector<int> res(nums.size(), 0);
            for(int i=0; i<nums.size(); i++){
                if(nums[i] == 0){
                    res[i] = x;
                }
            }
            return res;
        }
        else{
            vector<int> res(nums.size(), 0);
            for(int i=0; i<nums.size(); i++){
                res[i] = x/nums[i];
            }
            return res;
        }

        // return res;
    }
};
