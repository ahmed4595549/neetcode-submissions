class Solution {
public:
   vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();

    vector<int> left(n);
    vector<int> right(n);
    vector<int> output(n);
    left[0] = 1;
    for (int i = 1; i < n; i++) {
        left[i] = left[i - 1] * nums[i - 1];
    }
    right[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--) {
        right[i] = right[i + 1] * nums[i + 1];
    }
    for (int i = 0; i < n; i++) {
        output[i] = left[i] * right[i];
    }
    return output;

}
};
// I realized I need the product of elements before and after each index.
// So I used prefix and suffix products, starting from 1 on both sides,
// then combined them to get the product except nums[i].
