class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> frq;
        for(int i : nums){
            frq[i]++;
        }

        vector<pair<int, int>> vec(frq.begin(), frq.end());
        sort(vec.begin(), vec.end(), [](auto &a, auto &b){
            return a.second > b.second;
        });

        vector<int> result;

        for(int i=0; i<k && i<vec.size(); i++){
            result.push_back(vec[i].first);
        }

        return result;
    }
};
