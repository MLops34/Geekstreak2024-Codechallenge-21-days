class Solution {
  public:
    int totalCount(int k, vector<int>& arr) {
        // code here
        int result=0;
        for(int i=0;i<arr.size();i++){
            int div=arr[i]/k;
            int rem=arr[i]%k;
            result+=div;
            if(rem>0) result++;
        }
        return result;
    }
};