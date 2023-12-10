/*
Smith Number

Given a number n, the task is to find out whether this number is a Smith number or not. A Smith number is a composite number whose sum of digits is equal to the sum of digits of its prime factors.

Example 1:

Input:
n = 4
Output:
1
Explanation:
The sum of the digits of 4 is 4, and the sum of the digits of its prime factors is 2 + 2 = 4.
Example 2:

Input:
n = 378
Output:
1
Explanation:
378 = 21*33*71 is a Smith number since 3+7+8 = 2*1+3*3+7*1.
Your Task:
You don't need to read input or print anything. Your task is to complete the function smithNum() which takes an Integer n as input and returns the answer.

Expected Time Complexity: O(n * log(n))
Expected Auxiliary Space: O(n)
*/

//# solution 

//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
  
  bool isPrime(int n){
      if(n==1 || n==0 ) return false;
      for(int i=2;i<=sqrt(n);i++){
          if(n%i==0) return false;
      }
      
      return true;
  }
  
  int totalSum(int n){
      
      int ans=0;
      while(n){
          int rem=n%10;
          ans+=rem;
          n/=10;
      }
      
      return ans;
  }
  
    int smithNum(int n) {
        // code here
        
        vector<int> primeNum;

        int sum1 = totalSum(n), sum2 = 0,sum3=0;;

        if (isPrime(n)) return 0;

        for (int i = 2; i <= sqrt(n); i++) {
            if (isPrime(i)) primeNum.push_back(i);
        }

        for (int i : primeNum) {
            if (n == 1) break;  

           
                while (n % i == 0 && n > 0) {
                    sum2 += i;
                    
                    n /= i;
                
            }
        }
        
       

        return sum1 == sum2;
        
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        cout << ob.smithNum(n) << endl;
    }
    return 0;
}
// } Driver Code Ends