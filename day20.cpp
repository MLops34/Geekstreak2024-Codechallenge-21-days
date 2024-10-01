class solution {
public:
    // Helper function to multiply two arrays
    long long multiplyTwoArray(vector<long long>& arr1, vector<long long>& arr2) {
        int n = arr1.size();
        int m = arr2.size();
        
        vector<long long> ans(n + m, 0); // Result array
        
        // Perform the multiplication
        for (int i = n - 1; i >= 0; i--) {
            long long carry = 0; // Reset carry for each digit of arr1
            for (int j = m - 1; j >= 0; j--) {
                long long mul = arr1[i] * arr2[j] + ans[i + j + 1] + carry; // Multiply and add carry and current ans
                
                ans[i + j + 1] = mul % 10; // Store the current digit
                carry = mul / 10;           // Update carry
            }
            ans[i] += carry; 
        }

        // Convert the resulting array into a single number
        long long result = 0;
        long long power = 1;

        // Skip leading zeros
        int i = 0;
        while (i < ans.size() && ans[i] == 0) i++;
        
        // Convert the result vector into a number
        for (; i < ans.size(); i++) {
            result = result * 10 + ans[i];
        }
        
        return result;
    }

    // Function to multiply two linked lists
    long long multiplyTwoLists(Node *first, Node *second) {
        vector<long long> arr1, arr2;
        
        // Convert the first linked list to a vector
        Node* temp = first;
        while (temp) {
            arr1.push_back(temp->data);
            temp = temp->next;
        }
        
        // Convert the second linked list to a vector
        temp = second;
        while (temp) {
            arr2.push_back(temp->data);
            temp = temp->next;
        }
        
        // Multiply the two arrays
        return multiplyTwoArray(arr1, arr2)%1000000007;
    }
};
