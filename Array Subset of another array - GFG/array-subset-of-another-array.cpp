//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) ;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m];

        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> a2[i];
        }

        cout << isSubset(a1, a2, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends

#include<bits/stdc++.h>
string isSubset(int a1[], int a2[], int n, int m) {
    
    unordered_map<int,int> mp1;
    unordered_map<int,int> mp2;
    bool a = true;
    
    for(int i = 0;i < n;i++)
      mp1[a1[i]]++;

   for(int i = 0;i < m;i++)
      mp2[a2[i]]++;

   
    for(int i = 0;i < m;i++){
        if (mp1[a2[i]] < mp2[a2[i]])
            a = false;
 //           cout << "Asshole"; 
    }


    if (a)
       return "Yes";
    else 
       return "No";

    
    
}