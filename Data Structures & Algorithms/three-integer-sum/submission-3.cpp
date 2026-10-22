class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> res;

        int i = 0;
        while(i < nums.size()){
            if(i != 0 && nums[i] == nums[i-1]) {i++; continue;}

            int target = nums[i] * -1;

            int j = i + 1;
            int k = nums.size() - 1;
            while(j<k){
                int sum = nums[j] + nums[k];
                if(sum == target){
                    res.push_back({nums[i], nums[j], nums[k]});
                    j++; k--;
                    while(nums[j] == nums[j-1] && j<k) j++;
                    while(nums[k] == nums[k+1] && j<k) k--;
                }
                else if(sum < target){
                    j++;
                }else{
                    k--;
                }
            }
            i++;
        }

        return res;
    }
};
