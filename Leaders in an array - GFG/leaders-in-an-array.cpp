//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
    

class Solution {
public:
    // Function to find the leaders in the array.
    vector<int> leaders(int a[], int n) {
        vector<int> v;
        for(int i=0 ; i<n ;i++){
            bool l=true;
            for(int j=i+1 ; j<n ;j++){
                if(a[j]>a[i]){
                    l=false;
                    break;
                }
                
            }
            if(l){
                    v.push_back(a[i]);
                }
            
        }
        return v;
    }
};


//{ Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}

// } Driver Code Ends