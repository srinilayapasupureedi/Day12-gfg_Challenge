//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
    int circularSubarraySum(vector<int> &arr) {
        int n = arr.size();
        int maxSum = INT_MIN, currentMax = 0;
    for(int i = 0; i < n; i++) {
        currentMax = max(arr[i], currentMax + arr[i]);
        maxSum = max(maxSum, currentMax);
    }
    int minSum = INT_MAX, currentMin = 0, totalSum = 0;
    for (int i = 0; i < n; i++) {
        currentMin = min(arr[i], currentMin + arr[i]);
        minSum = min(minSum, currentMin);
        totalSum += arr[i];
    }

    if (totalSum == minSum) {
        return maxSum;
    }
    int circularSum = totalSum - minSum;
    return max(maxSum, circularSum);
       
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.circularSubarraySum(arr);

        cout << res << endl;
    }
    return 0;
}

// } Driver Code Ends
