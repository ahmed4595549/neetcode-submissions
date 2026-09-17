class Solution {
public:

   vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> m;

    for (string x : strs) {
        string y = x;
        sort(y.begin(), y.end());

        m[y].push_back(x);
        // if the y is not in the maping key it will be add then add the valus x as valus to it 
    }
    // to convert the valus of the maping into a string 
    vector<vector<string>> ans;

    for (auto& pair : m) {
        ans.push_back(pair.second);
    }

    return ans;
}
};
