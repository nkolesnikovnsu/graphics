class Solution {
public:
    bool isValid(string s) {
        stack<char> counter;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') { 
                counter.push(c);
            } else {
                if (counter.empty() || (c == ')' && counter.top() != '(') ||
                    (c == '}' && counter.top() != '{') ||
                    (c == ']' && counter.top() != '[')) {
                    return false;
                }
                counter.pop();
            }
        }
        return counter.empty();
    }
};
