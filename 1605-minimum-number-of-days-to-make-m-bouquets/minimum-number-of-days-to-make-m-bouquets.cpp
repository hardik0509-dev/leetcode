class Solution {
public:
    bool poss(vector<int>&bloomDay,int day,int r,int b){
        int count=0;
        int nob=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=day){
                count++;

            }
            else{
                nob+=(count/b);
                count=0;
            }
        }
            nob+=(count/b);
            return nob>=r;
            
    }
    
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long val=m*1LL*k*1LL;
        if(val>bloomDay.size()) return -1;
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high =*max_element(bloomDay.begin(),bloomDay.end());
        while(low<=high){
             int mid=low+(high-low)/2;
            if(poss(bloomDay,mid,m,k)){
                high=mid-1;

            }
            else{
                low=mid+1;
            }
        }
        return low;

        
    }
};