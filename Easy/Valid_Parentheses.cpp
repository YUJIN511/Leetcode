class Solution {
public:
    bool isValid(string s) {
               if (s.length() % 2 == 1) {
            return false;
        }

        stack<char> temp;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] != '}' && s[i] != ']' && s[i] != ')') {
                temp.push(s[i]);
            }
            else if(!temp.empty()){
                if ((temp.top() == '{' && s[i] == '}')|| ((temp.top() == '[' && s[i] == ']')) || ((temp.top() == '(' && s[i] == ')'))){
                        temp.pop();
                }
                else {
                    return false;
                }
            }
        }
        return temp.empty();
    }
};
