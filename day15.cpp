class Solution {
  public:
    int maxStep(vector<int>& arr) {
        
        int maxLength = 1;
        int currentLength = 1;
        for(int i = 0; i < arr.size() - 1; i++){
            
            if(arr[i] < arr[i + 1])
                currentLength++;
            else{
                maxLength = max(maxLength, currentLength);
                currentLength = 1;
            }
        }
        maxLength = max(maxLength, currentLength);
        return maxLength - 1;
    }
};