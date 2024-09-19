
class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x){
    std::stack<char> s;
    for (char c:x) {
        if (c=='('||c=='{'||c=='[') {
            s.push(c);
        } else {
            if (s.empty()) return false;
            char top = s.top();
            if ((c == ')' && top=='(')|| (c == '}' && top == '{') || (c == ']' && top == '[')) {
                s.pop();
            } else {
                return false;
            }
        }
    }
    return s.empty();
}

};