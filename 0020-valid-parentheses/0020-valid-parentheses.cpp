class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto& it : s){
            if(it == '(' || it == '{' || it == '[') st.push(it);
            else {
                if(st.empty()) return false;
                char front = st.top();
                st.pop();
                if(it == ')' && front != '(') return false;
                if(it == '}' && front != '{') return false;
                if(it == ']' && front != '[') return false;
            } 
        }
        return st.empty();
    }
};