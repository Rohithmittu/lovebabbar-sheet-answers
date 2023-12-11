vector<pair<char,int>> duplicate_char(string s, int n){
    
    // Find the duplicate characters in a string.
    
    const int k = 255;
    vector<int> freq(k);
    for (int i = 0; i < s.size(); i++){
        freq[s[i]]++;
    }
    vector<pair<char,int>> ans;
    for (int i = 0; i < k; i++){
        if (freq[i] > 1){
            ans.push_back({char(i), freq[i]});
        }
    }
    return ans;
}