// User function template for C++
class Solution {
  public:
    // Returns count buildings that can see sunlight
    int countBuildings(vector<int> &height) {
        // code here
        if (height.empty()) return 0;

    int count = 1;  // The first building always sees the sunrise
    int max_height = height[0];

    for (size_t i = 1; i < height.size(); ++i) {
        if (height[i] > max_height) {
            ++count;
            max_height = height[i];
        }
    }

    return count;
}
    
};