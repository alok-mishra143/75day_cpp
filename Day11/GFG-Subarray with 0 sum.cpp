/*
Subarray with 0 sum

Given an array of integers. Find if there is a subarray (of size at-least one) with 0 sum. You just need to return true/false depending upon whether there is a subarray present with 0-sum or not. Printing will be taken care by the driver code.

Example 1:

Input:
n = 5
arr = {4,2,-3,1,6}
Output: 
Yes
Explanation: 
2, -3, 1 is the subarray with sum 0.
Example 2:

Input:
n = 5
arr = {4,2,0,1,6}
Output: 
Yes
Explanation: 
0 is one of the element in the array so there exist a subarray with sum 0.
Your Task:
You only need to complete the function subArrayExists() that takes array and n as parameters and returns true or false.

Expected Time Complexity: O(n).
Expected Auxiliary Space: O(n).

*/


//#solution

//{ Driver Code Starts
// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
        unordered_set<int>sumSet;
        int ans=0;
        
        for(int i=0;i<n;i++){
            
            ans += arr[i];

          
            if (ans==0||sumSet.find(ans) != sumSet.end())
                return true;

          
            sumSet.insert(ans);
            
        }
        
        
        return false;
    }
};

//{ Driver Code Starts.
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution obj;
	    	if (obj.subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}
// } Driver Code Ends