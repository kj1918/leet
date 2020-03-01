class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int count=0;
        int temp=0;
        temp=(digits[digits.size()-1]+1)%10;
        count=(digits[digits.size()-1]+1)/10;
        digits[digits.size()-1]=temp;      
        int i=digits.size()-2;
        while(count!=0&&i>=0){
            temp=(digits[i]+1)%10;
            count=(digits[i]+1)/10;
            digits[i]=temp;
            i--;
        }
        if(count!=0){
            digits.insert(digits.begin(),count);
        }
        return digits;
    }
};
