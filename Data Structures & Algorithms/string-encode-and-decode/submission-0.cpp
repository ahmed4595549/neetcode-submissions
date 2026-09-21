class Solution {
public:
string encode(vector<string>& strs) {
    string encoded;

    for (int i = 0; i < strs.size(); i++) {
        int len = strs[i].length();

        encoded += to_string(len) + "#" + strs[i];
    }

    return encoded;
}

vector<string> decode(string s) {
    vector<string> result;

    int i = 0;

    while (i < s.length()) {
        int len = 0;
        while (s[i] != '#') {
            len = len * 10 + (s[i] - '0');
            i++;
            // Move the previous digits one place to the left by multiplying by 10,
           // then add the new digit to build the complete number.
        }
        i++;

        string word = s.substr(i, len);
        result.push_back(word);

        i += len;
    }

    return result;
}
};
