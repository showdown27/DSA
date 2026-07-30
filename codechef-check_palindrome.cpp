#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n, a[n];
        cin >> n;
        for(int i = 0; i<n; i++){
            cin>>a[i];
        }
        bool x = -1;
        for(int i = 0; i<n/2; i++){
            int j = n-1-i;
            int diff = abs(a[i]-a[j]);
            if(diff ==0) continue;
            else if(diff==2){
                x = max(a[i], a[j])-1;
            }
            else {
                cout << 'NO';
                return 0;
            }
        }
        if(x!=-1){
            for(int i = 0; i<n; i++){
                if(a[i]<=x) a[i]++;
                else a[i]--;
            }
        }
        bool p = true;
        int i = 0, j = n-1-i;
        while(i<j){
            if(a[i]==a[j]){
                i++;
            }
            else{
                p = false;
                break;
            }
        }
        if(p==false) cout<<"YES";
        else cout<< "NO";
    }
    return 0;
}


/*
Up-Down Palindrome

You're given an array A of length N.

You can perform the following operation on it:

Choose an integer X.
Then, for each index i (1 ≤ i ≤ N):
- If Ai ≤ X, add 1 to Ai.
- Otherwise, subtract 1 from Ai.

For example, if A = [2, 6, 3, 4, 3] and you choose X = 3, the array becomes [3, 5, 4, 3, 4].

You can perform this operation at most once, but you are free to choose any value of X.

Determine whether it is possible to turn the array A into a palindrome by performing this operation at most once.

An array A is called a palindrome if and only if Ai = A(N + 1 − i) for every 1 ≤ i ≤ N.

Input Format
------------
The first line contains a single integer T, denoting the number of test cases.

For each test case:
- The first line contains a single integer N, the length of the array.
- The second line contains N space-separated integers A1, A2, ..., AN.

Output Format
-------------
For each test case, print "Yes" if it is possible to make the array a palindrome by performing the operation at most once; otherwise, print "No".



*/

The output is case-insensitive, so "YES", "Yes", "yes", etc. are all accepted.
