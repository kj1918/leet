class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.size()==0){
            return 0;
        }
        int len=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]!=' '){
                len++;
            }
            if(s[i]==' '&&len!=0){
                break;
            }
        }
        return len;
    }
};
