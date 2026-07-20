#include <stack>
#include <string>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char ch : s) {
            if (ch == '(' || ch == '[' || ch == '{') {
                st.push(ch);
            } 
            else{
                if (st.empty()) {
                    return false;
                }
                char t = st.top();
                st.pop();
                if (ch == ')' && t != '(') return false;
                if (ch == ']' && t != '[') return false;
                if (ch == '}' && t != '{') return false;
            }
        }
        return st.empty();
    }
};