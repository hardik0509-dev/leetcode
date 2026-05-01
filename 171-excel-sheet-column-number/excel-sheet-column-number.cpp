class Solution {
public:
    int titleToNumber(string columnTitle) {
        int sequence=0;
        for(char ch:columnTitle){
            sequence=sequence*26+(ch-'A'+1);
        }
        return sequence;
        
    }
};