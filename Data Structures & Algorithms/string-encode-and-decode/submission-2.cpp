class Solution {
public:

    string encode(vector<string>& strs) {
        string ans="";
        for(int i=0;i<strs.size();i++){
            ans+=strs[i]+"~";
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        int i=0;
        while(i<s.length()){
            string middle="";
            while(s[i]!='~'){
                middle+=s[i];
                i++;
            }
            ans.push_back(middle);
            i++;
        }
        return ans;
    }
};
