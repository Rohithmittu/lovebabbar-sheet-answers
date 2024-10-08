//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    
    static bool comp( vector<int>& a, vector<int>& b) {
        return a[0] < b[0];
    }
    
    
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
         sort(intervals.begin(),intervals.end(),comp);
         
         stack<vector<int>> s;
         s.push(intervals[0]);
         
         for(int i = 1;i<intervals.size();i++){
             vector<int> curr = intervals[i];
             vector<int> &top = s.top();
             
             if( top[1] >= curr[0] ){
                 top[1] = max(curr[1],top[1]);
             }else{
                 s.push(curr);
             }
             
         }
         
          vector<vector<int>> ans ;
          
          while(!s.empty()){
              ans.insert(ans.begin(),s.top());
              s.pop();
          }
          
          return ans;
         
         
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends