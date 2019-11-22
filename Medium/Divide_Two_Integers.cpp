class Solution {
public:
    int divide(int dividend, int divisor) {
        int result = 0;
        int temp=0;
        int flag = 0;
        long long my_divisor;
        long long divid=dividend;
        long long divis=divisor;
        
        if(divisor==-1){
            if(dividend==INT_MIN)   return INT_MAX;
            else    return dividend*-1;
        }
        if(divisor==1)  return dividend;
        
        if ((dividend<0 && divisor>0) || (dividend>0 && divisor<0)) flag=1; 
        
        if(dividend<0) divid = abs(divid);
        if(divisor<0) divis = abs(divis);
        
        if(divid < divis)   return 0;
        
        my_divisor=divis;
        
        while(divid >= divis){
            while (divid >= (divis<<1) && (divis<<1) > 0) {
                divis=divis<<1;
                temp++;
            }
            result += pow(2,temp);
            temp=0;
            divid-=divis;
            divis=my_divisor;
        }
        return flag ? result*-1 : result;
    }
};
