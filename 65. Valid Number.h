class Solution {
public:
    bool isNumber(string s) {
        bool b_sign=true,e_sign=true,e=true,dp=true;
        for(int i=0;i<s.size();i++){
            if((s[i]<'0'||s[i]>'9')&&(s[i]!='+'&&s[i]!='-')&&(s[i]!='e'&&s[i]!='E')&&(s[i]!='.')&&(s[i]!=' ')){
                return false;
            }
            if((s[i]=='-'||s[i]=='+')){//considering about +/-
                if(e_sign==true||b_sign==true){
                    if(i!=0){
                        if(s[i-1]!=' '&&s[i-1]!='e'){
                            return false;
                        }
                    }
                    if(i==s.size()-1){//'XXXX-' or '-'
                        return false;
                    }
                    if(e==true){
                        if(b_sign==true){// +/-XXXXXe
                            b_sign=false;
                        }
                        else{
                            return false;
                        }
                    }
                    else{
                        if(e_sign==true){
                            e_sign=false;
                            for(int n=i;n<s.size();n++){
                                if((s[n]<'0'||s[n]>'9')&&s[n]!='-'&&s[n]!='+'){
                                    return false;
                                }
                            }
                        }
                        else{
                            return false;
                        }
                    }
                   
                }
                else{
                    return false;
                }
                
            }
            if(s[i]=='e'||s[i]=='E'){
                if(e==true){
                    e=false;
                    if(s[i-1]==NULL||s[i+1]==NULL||s[i+1]==' '||s[i-1]==' '||s[i-1]=='+'||s[i-1]=='-'){
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
            if(s[i]=='.'){
                if(e==true&&dp==true){
                    dp=false;
                    bool front=false,back=false;
                    for(int m=i;m<s.size()&&s[m]!='e';m++){
                        if(s[m]>='0'&&s[m]<='9'){
                            front=true;
                            break;
                        }
                    }
                    for(int m=i;m>=0&&s[m]!='e';m--){
                        if(s[m]>='0'&&s[m]<='9'){
                            back=true;
                            break;
                        }
                    }
                    if(front!=true&&back!=true){
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
            if(s[i]==' '){
                bool front=false,back=false;
                for(int m=i;m<s.size();m++){
                    if(s[m]!=NULL&&s[m]!=' '){
                        back=true;
                        break;
                    }
                }
                for(int m=i;m>=0;m--){
                    if(s[m]!=NULL&&s[m]!=' '){
                        front=true;
                        break;
                    }
                }
                if(front==true&&back==true){
                    return false;
                }
                if(front==false&&back==false){
                    return false;
                }
            }
        }
        return true;
    }
};
