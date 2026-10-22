class Solution {
public:
    int trap(vector<int>& height) {
        int res = 0;

        int max_l = 0;
        int max_r = 0;

        int l = 0;
        int r = height.size() - 1;

        while(l<=r){
            if(max_r > max_l){
                res += max((max_l - height[l]), 0);
                max_l = max(max_l, height[l]);
                l++;
            }
            else{
                res += max((max_r - height[r]), 0);
                max_r = max(max_r, height[r]);
                r--;                
            }
        }

        if(height.size() % 2 == 1){

        }

        return res;
    }
};
