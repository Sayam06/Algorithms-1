#include<bits/stdc++.h>
using namespace std; 

void powse(string s,int i,string cur,vector<string> &vs){
        if(i == s.length()){ 
            vs.push_back(cur);
            return;
        }  
        powse(s,i+1,cur+s[i],vs); 
        powse(s,i+1,cur,vs); 
}  
signed main(){ 
        string a;
        cin>>a; 
        vector<string> vs;
        set<string> ans;
        powse(a,0,"",vs);      
        for(auto i:vs) cout<<i<<" ";  
        return 0;
}
 
