class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) { 
        vector<int>result;
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int num:nums){
            mp[num]++;

        }
        for(int i=1;i<=n;i++){
            if(!mp.count(i)) {
                result.push_back(i);
            }
        }
        return result;
    }
};