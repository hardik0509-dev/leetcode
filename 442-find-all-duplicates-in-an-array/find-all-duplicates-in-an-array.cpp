class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>mpp;
        vector<int>ans;
        for(int i:nums){
            mpp[i]++;
            if(mpp[i]==2){
                ans.push_back(i);
            }
        }
        return ans;
    }
};