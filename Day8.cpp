class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) { 
       int i = 0, l = 0, r = 0;
    while (i < S.size()) {
        while (i < S.size() && S[i] != '.') {
            i++;
            r++;
        }
        reverse(S.begin() + l, S.begin() + r);
        l = r = i + 1;
        i++;
    }
    reverse(S.begin(), S.end());
    return S;
        
        
    } 
};