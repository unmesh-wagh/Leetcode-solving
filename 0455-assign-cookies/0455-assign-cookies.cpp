class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int m=g.size()-1,n=s.size()-1;
        int o=0,p=0;
        

        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        while(p<=n && o<=m){
        if(s[p]>=g[o]){
        
        o++;
      

        }
        p++;
    
        }
        return o;

    }
};