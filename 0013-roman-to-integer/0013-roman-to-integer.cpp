class Solution {
public:
    int romanToInt(string s) {
        int n = s.size();
        int sumi = 0;
        for(int i = n-1; i >= 0; i--){
            if(s[i] == 'I')
                sumi+=1;
            else if(s[i] == 'V'){
                if(i != 0){
                    if(s[i - 1] == 'I')
                    {
                        sumi+=4;
                        i--;
                    }
                        else
                            sumi +=5;
                }
                else
                    sumi+=5;
            }
            else if(s[i] == 'X'){
                if(i != 0){
                    if(s[i - 1] == 'I')
                    {
                        sumi+=9;
                        i--;
                    }
                        else
                            sumi +=10;
                }
                else
                    sumi+=10;
            }
            else if(s[i] == 'L'){
                if(i != 0){
                    if(s[i - 1] == 'X'){
                        sumi+=40;
                        i--;
                    }
                        else
                            sumi+=50;
                }
                else
                    sumi+=50;
            }
            else if(s[i] == 'C'){
                if(i != 0){
                    if(s[i - 1] == 'X'){
                        sumi+=90;
                        i--;
                    }
                        else
                            sumi+=100;
                }
                else
                    sumi+=100;
            }
            else if(s[i] == 'D'){
                if(i != 0){
                    if(s[i - 1] == 'C'){
                        sumi+=400;
                        i--;
                    }
                        else
                            sumi += 500;
                }
                else
                    sumi+=500;
            }
            else if(s[i] == 'M'){
                if(i != 0){
                    if(s[i - 1] == 'C'){
                        sumi+=900;
                        i--;
                    }
                        else
                            sumi += 1000;
                }
                else
                    sumi+=1000;
            }
        }
        return sumi;
    }
};