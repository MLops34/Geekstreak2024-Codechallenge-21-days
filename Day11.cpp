class Solution {
  public:
    int lps(string str) {
        // Your code goes here
        int index = 0,suffixIndex = 1,count = 0,startPosition = 1,stringLength = str.size();
        while (index < stringLength && suffixIndex < stringLength) {
            if (str[index] == str[suffixIndex]) {
            count++;
            index++;
            suffixIndex++;
        }else{
        count=0;
        startPosition++;
        suffixIndex=startPosition;
        index=0;
        }
    }
        return count;
    }
};