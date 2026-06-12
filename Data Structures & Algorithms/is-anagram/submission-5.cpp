class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        int count[26];
        for (int i=0;i<26;i++){
            count[i]=0;
        }
        for(int i=0;i<s.length();i++){
            count[s[i]-97]++;
            count[t[i]-97]--;
        }
        for (int i=0;i<26;i++){
            if(count[i]!=0){
                return false;
            }
        }
        return true;
        //To avoid using extra space , we can first sort them , and check one by one (O(n+nlogn)=O(nlogn))
    }
};
