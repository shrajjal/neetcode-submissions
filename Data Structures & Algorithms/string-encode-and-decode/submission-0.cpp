class Solution {
public:

    string encode(vector<string>& strs) {

        string str="";
        for(auto it:strs){
            str+=to_string(it.size()) + "#" + it;
        }

        return str;

    }

    vector<string> decode(string s) {

        vector<string>str;
        int n=s.size();
        int i=0;
        
        while(i<n){
            int j=i;

            while(s[j]!='#'){
                j++;
            }

            int len= stoi(s.substr(i,j-i));
            j++;
            str.push_back(s.substr(j,len));
            i=j+len;
        }

        return str;
        
    }
};
