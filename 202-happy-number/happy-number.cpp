class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>mp;

        while(n!=1&&!mp.count(n)){
            mp.insert(n);
            int sum=0;
            while(n>0){
            int dig=n%10;
            sum += dig*dig;
            n=n/10;
        }
        n=sum;

        }
        return n==1;
    }
};