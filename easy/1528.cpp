class Solution {
public:
    string restoreString(string s, vector<int>& in) 
    {
        string t=s;
        for(int i=0;i<s.length();i++)
            s[in[i]]=t[i];        
        return s;
    }
};
string restoreString(string s, vector<int>& indices) {
        int n = (int)s.length(), i = 0;
        while (i < n) {
            if (indices[i] == i) {
                i++;
                continue;
            }
            int j = indices[i];
            swap(indices[i], indices[j]);
            swap(s[i], s[j]);
        }
        return s;
    }
