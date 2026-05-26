class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high =n-1;
        int ans =n;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>=target){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        if(ans==n||nums[ans]!=target)
        return {-1,-1};




        
    

        
         low=0;
         high =n-1;
        int last =n;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>target){
            last=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return {ans,last-1};




        
    }
    
};