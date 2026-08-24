class Solution {
public:
    int val(char t){
        if(t=='I'){
            return 1;
        }else if(t=='V'){
            return 5;
        }else if(t=='X'){
            return 10;
        }else if(t=='L'){
            return 50;
        }else if(t=='C'){
            return 100;
        }else if(t=='D'){
            return 500;
        }else if(t=='M'){
            return 1000;
        }
        return 0;
    }
    int romanToInt(string s) {
        int sum =0;
        int n =s.length();
        
        for(int i =0; i<n; i++){
            char t = s[i];

            if(s[i] == 'I' && (s[i+1] == 'V' || s[i+1] == 'X')){
                t = s[i+1];
                sum +=(val(t)-1);
                i++;
            }else if(s[i] == 'X' && (s[i+1] == 'L' ||s[i+1] == 'C')){
                t = s[i+1];
                sum+=(val(t)-10);
                i++;
            }else if(s[i] == 'C' && (s[i+1] == 'D' || s[i+1] == 'M')){
                t = s[i+1];
                sum +=(val(t) - 100);
                i++;
            }else{
                sum+=val(t);
            }
        }
        return sum;
    }
};