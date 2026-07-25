class Solution {
  public:
    int countTriplets(int sum, vector<int>& arr) {
        int n = arr.size();
        int count = 0;
        if(n<3) return 0;
        sort(arr.begin(), arr.end());
        for(int i = 0; i<n-2; i++){
            int j = i+1, k=n-1;
            while(j<k){
                int ssum = arr[i]+arr[j]+arr[k];
                if(ssum<sum && (i<j&&j<k)){
                    count+=(k-j);
                    j++;
                }
                else k--;
            }
        }
        return count;
    }
};


/*
Input: sum = 2, arr[] = [-2, 0, 1, 3]
Output:  2
Explanation: Triplets with sum less than 2 are (-2, 0, 1) and (-2, 0, 3)

Input: sum = 12, arr[] = [5, 1, 3, 4, 7]
Output: 4
Explanation: Triplets with sum less than 12 are (1, 3, 4), (5, 1, 3), (1, 3, 7) and (5, 1, 4).
*/
