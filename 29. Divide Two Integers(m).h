class Solution {
public:
    int divide(int dividend, int divisor) {
        int out=0;
        if(dividend==0)
        {
            return 0;
        }
        if(divisor==1)
        {
            return dividend;
        }
        if(divisor==-1&&dividend==INT_MIN)
        {
            return INT_MAX;
        }
        if(divisor==-1&&dividend!=INT_MIN)
        {
            return -dividend;
        }
        unsigned int a;
        unsigned int b;
        if(dividend==INT_MIN){
            a=INT_MAX;
        }
        else
        {
            a=abs(dividend);
        }
        if(divisor==INT_MIN){
            b=INT_MAX;
        }
        else
        {
            b=abs(divisor);
        }
        if(dividend==INT_MIN&&dividend!=divisor){
            a-=b;
            out++;
            a++;
        }
        if(divisor==INT_MIN&&dividend==INT_MAX){
           return 0;
        }
        while(a>=b){
            a-=b;
            out++;
        }
        if((dividend>0&&divisor>0)||dividend<0&&divisor<0)
        {
            return out;
        }
        else{
            return -out;
        }
    }
};
