vector<int> findTwoElement(vector<int>& nums) {
        int size=nums.size();
        vector<int>result;
        for (int i=0;i<size;i++) {
            if (nums[abs(nums[i])-1]<0) {
                result.push_back(abs(nums[i]));
                continue;
            }
            nums[abs(nums[i])-1]*=-1;
        }
        for(int i=0;i<size;i++) {
            if (nums[i]>0) result.push_back(i+1);
        }
        return result;
    }
    