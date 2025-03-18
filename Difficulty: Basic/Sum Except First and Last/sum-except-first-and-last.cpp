//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    /*You are required to complete this method*/
    int sumExceptFirstLast(vector<int>& arr) {
        // Your code here
        int sum=0;
        for(int i=0;i<arr.size();i++)
        {
            sum=sum+arr[i];
        }
        return sum-(arr[0]+arr[arr.size()-1]);
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.sumExceptFirstLast(arr);
        cout << res << endl;
        cout << "~" << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends