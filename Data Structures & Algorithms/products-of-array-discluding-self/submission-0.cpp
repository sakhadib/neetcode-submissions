class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int count_zero = 0;
        int zeros_index = 0;
        long long prod = 1;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == 0){
                count_zero++;  
                zeros_index = i; 
            }
            else{
                prod = prod * nums[i];
            }

        }

        if(count_zero > 1){
            return vector<int>(nums.size(), 0);
        }
        else if(count_zero == 1){
            vector<int> res(nums.size(), 0);
            res[zeros_index] = prod;
            return res;
        }
        else{
            vector<int>res(nums.size());
            for(int i = 0; i<nums.size(); i++){
                res[i] = prod / nums[i];
            }

            return res;
        }
    }
};
