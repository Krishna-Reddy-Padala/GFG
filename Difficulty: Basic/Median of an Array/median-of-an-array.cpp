//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    double findMedian(vector<int> &arr) {
       priority_queue<double> s;
       for(int i=0;i<arr.size();i++)
       {
           s.push(arr[i]);
       }
       if(arr.size()%2==0)
       {
           int k=0;
           double sum=0;
           while(k<=arr.size()/2)
           {
               if(k==(arr.size()/2)-1 or k==(arr.size()/2))
               {
                   sum=sum+s.top();
                   k++;
                   s.pop();
                   
               }
               else {
                   //sum=sum+s.top();
                   s.pop();
                   k++;
               }
           }
           return sum/2;
       }
       else
       {
           double d=s.top();
           int k=0;
          while(k<=arr.size()/2)
          {
              d=s.top();
              s.pop();
              k++;
          }
          return d;
       }
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        vector<int> arr;
        while (ss >> num)
            arr.push_back(num);

        Solution ob;
        cout << ob.findMedian(arr) << endl;
    }
}

// } Driver Code Ends