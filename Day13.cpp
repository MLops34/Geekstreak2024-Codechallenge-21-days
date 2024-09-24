 string smallestWindow(string s, string p) {
    int charCount[26] = {0}, patternLength = p.length(), windowStart = 0, stringLength = s.length();
    int windowCount[26] = {0}, minWindowSize = INT_MAX, minWindowEnd = -1;
    char currentChar;
    for (auto charInPattern : p) charCount[charInPattern - 'a']++;
    for (int windowEnd = 0; windowEnd < stringLength; windowEnd++) {
        currentChar = s[windowEnd];
        if (charCount[currentChar - 'a'] >= 1 && windowCount[currentChar - 'a'] < charCount[currentChar - 'a'])
            patternLength--;
        windowCount[currentChar - 'a']++;
        while (patternLength == 0) {
            if (minWindowSize > (1 + windowEnd - windowStart)) {
                minWindowSize = 1 + windowEnd - windowStart;
                minWindowEnd = windowEnd;
            }
            currentChar = s[windowStart];
            windowStart++;
            windowCount[currentChar - 'a']--;
            if (charCount[currentChar - 'a'] > windowCount[currentChar - 'a'])
                patternLength++;
        }
    }
    if (minWindowSize == INT_MAX)
        return "-1";
    return s.substr(1 + minWindowEnd - minWindowSize, minWindowSize);
}