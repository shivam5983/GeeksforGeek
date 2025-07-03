
class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
        stack<char> st;

        for(char ch : s){
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        }
        else {
        if (st.empty()) return false;

         char top = st.top();
            if ((ch == ')' && top == '(') ||
                (ch == '}' && top == '{') ||
                (ch == ']' && top == '[')) {
                st.pop(); 
            } else {
                return false; 
            }
        }
    }

    return st.empty(); 
    }
};