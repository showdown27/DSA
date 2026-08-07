/*

Given an array arr[], find the sub-array containing at least one number which has the minimum sum and return its sum.

Examples :

Input: arr[] = {3,-4, 2,-3,-1, 7,-5}
Output: -6
Explanation: The subarray is {-4,2,-3,-1} = -6
Input: arr[] = {2, 6, 8, 1, 4}
Output: 1
Explanation: The sub-array is {1} = 1

*/

class Solution {
	public:
	int smallestSumSubarray(vector<int>& a) {
		int be = a[0], v1 = 0, v2 = 0, res = a[0];
		for (int i = 1; i<a.size(); i++) {
			v1 = be + a[i];
			v2 = a[i];
			be = min(v1, v2);
			res = min(res, be);
		}
		return res;
	}
};
