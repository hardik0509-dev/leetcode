class Solution {
public:
    int nodr(vector<int>&weights,int md){
        int load=0;
        int day=1;
        
        for(int i=0;i<weights.size();i++){
            if(weights[i]+load>md){
                day=day+1;

            
             load=weights[i];
            }
            else{
                load+=weights[i];
            }


        }
        return day;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nodr(weights,mid)<=days){
                high=mid-1;

            }
            else{
                low=mid+1;
            }
        }
        return low;


        
    }
};