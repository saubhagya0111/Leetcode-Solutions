class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n=s.length();
        vector<char> v(n);
        for(int i=0;i<s.size();i++){
            v[indices[i]]=s[i];
        }
        string s1;
        for(int i=0;i<v.size();i++){
                  s1.push_back(v[i]);
        }
        return s1;
    }
};
