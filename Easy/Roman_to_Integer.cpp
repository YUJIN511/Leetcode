class Solution {
public:
    int romanToInt(string s) {
        
        int result = 0;
        int temp=0;
        int x=Roman(s[0]);
        int y;
        while(temp<s.length()-1){
            y=Roman(s[temp+1]);
            if(x<y){
                result+=y-x;
                temp+=2;
                x=Roman(s[temp]);
            }
            else{
                result+=x;
                temp++;
                x=y;
            }
        }
        return result+Roman(s[temp]);
    }
   int Roman(char c){
       switch(c){
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default : return 0;
        }
   }
};
