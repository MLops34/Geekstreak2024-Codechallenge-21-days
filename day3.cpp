class Solution {
  public:
    void rearrange(vector<int> &arr) {
        // code here
        vector<int> pos;
        vector<int> neg;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=0){
                pos.push_back(arr[i]);
            }
            else{
                neg.push_back(arr[i]);
            }
        }
        int i=0,n=0,p=0;
        while(p<pos.size() && n <neg.size()){
            if(i%2==0){
                arr[i]=pos[p];
                p++;
            }
            else{
                arr[i]=neg[n];
                n++;
            }
            i++;
            
        }
        while(p<pos.size()){
            arr[i]=pos[p];
            i++;
            p++;
        }
        while(n<neg.size()){
            arr[i]=neg[n];
            i++;
            n++;
        }
    }
    
};