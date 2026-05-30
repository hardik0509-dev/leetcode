class Solution {
public:
    long long totalhours(vector<int> &v,int hr){
        long long totalh=0;
        int n=v.size();
        for(int i=0;i<n;i++){
        totalh+=ceil((double)v[i]/(double)hr);
        }
        return totalh;
           
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        while (low<=high){
            int mid=low+(high-low)/2;
            long long totalh=totalhours(piles,mid);
            if(totalh<=h){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
        
    }
};