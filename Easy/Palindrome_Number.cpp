class Solution {
public:
    bool isPalindrome(int x) {
        int input=x;
        long long result=0;
        if(x<0){
            return false;
        }
      
        while(x!=0){
            result=result*10+x%10;
               x/=10;
        }
        
        return input==result;
    }
};
