long long maxSubarraySum(vector<int> arr, int n)
{

    long long maxi = 0;
    long long ans = 0;
   for(int i = 0;i<n;i++){
       

       ans += arr[i] ;
       maxi = max(maxi,ans);


       
       
    //    if(arr[i] > ans && arr[i] > 0){
    //        return arr[i];
    //    }

    if(ans < 0){
        ans = 0;
    }
       

   }

   return maxi;
}