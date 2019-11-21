class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result="";
        char com;
        int temp=0;
        if(strs.size()==0) return result;
        if(strs.size()==1) return strs[0];
        if(strs[0]=="") return result;
        
        while(strs[0].length()>temp){
            com=strs[0][temp];
            for(int i=1; i<strs.size(); i++){
                if(strs[i].length()<temp+1 || com!=strs[i][temp]){
                    return result;
                }
            }
            result+=com;
            temp++;
        }
        return result;
    }
};
