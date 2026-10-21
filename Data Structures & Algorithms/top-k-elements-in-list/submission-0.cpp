class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;

        for(int i : nums){
            if(mp.contains(i)){
                mp[i]++;
            }
            else{
                mp[i] = 1;
            }
        }

        vector<pair<int, int>> freq(mp.begin(), mp.end());

        sort(freq.begin(), freq.end(),
            [](const auto& a, const auto& b){
                return a.second > b.second;
            }
        );

        vector<int> result;

        for(int i=0; i<k; i++){
            result.push_back(freq[i].first);
        }

        return result;

    }
};
