class Solution{
  public:		
	int lps(string s) {
	   vector<int> ans(s.size(),0);
	   
	   int i = 1,j = 0;
	   
	   
	   while(i<s.size()){
	       if(s[i] == s[j]){
	           ans[i] = j+1;
	           i++;
	           j++;
	           
	       }else{
	           if(j==0){
	               i++;
	           }else{
	               j = ans[j - 1];
	           }
	       }
	   }
	   
	   return ans.back();
	   
	}
};