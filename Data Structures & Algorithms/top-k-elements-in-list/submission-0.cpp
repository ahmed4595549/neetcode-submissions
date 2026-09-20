class Solution {
public:

vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> freq;
    for (int x : nums) {
        freq[x]++;
    }
    vector<pair<int, int>> arr;

    for (auto p : freq) {
        arr.push_back({p.first, p.second});
    }

    int array_size = arr.size();
    int actual_k = min(k, array_size);

    for (int i = 0; i < actual_k; i++) {
        for (int j = 0; j < array_size - i - 1; j++) {
            if (arr[j].second > arr[j + 1].second) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    vector<int> ans;

    for (int i = array_size - actual_k; i < array_size; i++) {
        ans.push_back(arr[i].first);
    }

    return ans;
}

int main() {
    int k, n;
    if (!(cin >> k >> n)) return 0;

    // إدخال العناصر بشكل صحيح في مصفوفة بحجم n
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> x = topKFrequent(nums, k);

    for (int i = 0; i < x.size(); i++) {
        cout << x[i] << " ";
    }
    cout << endl;

    return 0;
}

};
