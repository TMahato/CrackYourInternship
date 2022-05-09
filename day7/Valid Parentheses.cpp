class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for(auto c: s){
            if(c == '(' or c=='{' or c=='[') st.push(c);
            else{
                if(st.empty() or (c==')' and st.top() != '(') or (c=='}' and st.top() != '{') or (c==']' and st.top() != '['))
                    return false;
                st.pop();
            }
        }
        return st.empty();
    }
};