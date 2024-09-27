// User function template for C++
// TLE CODE FOR GFG POTD
class Solution {
  public:
    // Function to find maximum of each subarray of size k.
    int max_element(vector<int>&arr,int r,int l){
        int num=0;
        for(int i=l;i<=r;i++){
            num=max(num,arr[i]);
        }
        return num;
    }
    vector<int> max_of_subarrays(int k, vector<int> &arr) {
        // your code here
        int l=0,maxi=0,cnt=0;
        vector<int> result;
        for(int r=0;r<arr.size();r++){
            cnt++;
            while(cnt==k){
                maxi=max_element(arr,r,l);
                result.push_back(maxi);
                l++;
                cnt--;
            }
        }
        return result;
        
    }
};

// OPTIMISED CODE USING DEQUEUE

class Solution {
  public:
    // Function to find maximum of each subarray of size k.
    vector<int> max_of_subarrays(int k,vector<int>&arr){
    deque<int> result;
    int l=0,maxi=arr[0];
    for (int r=0;r<arr.size();r++) {
        maxi=max(maxi,arr[r]);
        if (r-l+1==k) {
            result.push_back(maxi);
            if (arr[l]==maxi) {
                maxi=*max_element(arr.begin()+l+1,arr.begin()+r+1);
            }
            l++;
        }
    }
    return vector<int>(result.begin(),result.end());
    }
};