class Solution {
public:
    bool isAnagram(string s, string t) {
    int arr[26]={0};
    int arr2[26]={0};
    int size1=s.size();
    int size2=t.size();
    int i=0,j=0;
    for(i=0;i<size1;i++){
        arr[s[i]-'a']++;
    }
    for(j=0;j<size2;j++){
        arr2[t[j]-'a']++;
    }
    int z=0;
    for(z;z<26;z++){
        if (arr[z]!=arr2[z])
            return false ;
        }
    return true ;


}
};
