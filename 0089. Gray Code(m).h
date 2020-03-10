class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> re;
        int amount=pow(2,n);
        re.resize(amount);
        re[0]=0;
        for(int i=0;i<amount-1;i++){
            if(i%2==1){//i is even [1] is no.2
                int exp=0,temp=re[i];
                while(temp%2==0){//find the first 1 from right
                    temp/=2;
                    exp++;
                }
                temp/=2;
                if(temp%2==0){//then change the bit in it left
                    re[i+1]=(temp+1)*2;
                    re[i+1]++;
                    re[i+1]*=pow(2,exp);
                }
                else{
                    re[i+1]=(temp-1)*2;
                    re[i+1]++;
                    re[i+1]*=pow(2,exp);
                }
            }
            else{//i is odd
                if(re[i]%2==0){//re[i] is even
                    re[i+1]=re[i]+1;
                }
                else{//re[i] is odd
                    re[i+1]=re[i]-1;
                }
                
            }
        }
        return re;
    }
};
