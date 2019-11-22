class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string result;
        int max=0;
        int temp=0;
        if(s.length()==1) return 1;
        
        for(int i=0; i<s.length(); i++){
            if (result.find(s[i]) == -1) {
                result += s[i];
            }
            else {
                max = result.length() > max ? result.length() : max;
                result.erase(0, result.find(s[i]) + 1);
                result += s[i];
            }
        }
        return max>result.length() ? max : result.length();
    }
};
