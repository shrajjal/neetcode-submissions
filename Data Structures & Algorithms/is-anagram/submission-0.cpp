class Solution {
public:
    bool isAnagram(string s, string t) {

        map<char,int>mp;
        if (s.size()!=t.size()) return false;
        int n=s.size();

        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        for(int i=0;i<n;i++){
            mp[t[i]]--;
        }
        for(int i=0;i<n;i++){
            if (mp[t[i]]!=0) return false;
        }

        return true;

        
    }
};
