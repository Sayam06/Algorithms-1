#include<bits/stdc++.h>
using namespace std; 

// Print Subsequences
void subsequences(int i, vector<int> a, vector<int> &res) {
    if(i>=a.size()) {
        for(int i=0;i<res.size();i++) cout<<res[i]<<" ";
        cout<<endl;
        return;
    }
    
    res.push_back(a[i]);        // take particular index element in subsequence
    subsequences(i+1,a,res); 
    res.pop_back();
    subsequences(i+1,a,res);    // not take particular index element in subsequence
}



// Print Subsequences whose sum is K
void subsequencesK(int i,vector<int> a,vector<int> &res,int sum,int k){
    if(i>=a.size()){
        if(sum==k) {
            for(int j=0;j<res.size();j++) cout<<res[j]<<" "; 
            cout<<endl;
        }
        return;
    }
    res.push_back(a[i]);
    sum+=a[i];
    subsequencesK(i+1,a,res,sum,k);

    res.pop_back();
    sum-=a[i];
    subsequencesK(i+1,a,res,sum,k);
}


// Print true/false if Subsequences exists whose sum is K
bool subsequencesBool(int i,vector<int> a,int sum,int k){
    if(i>=a.size()){
        if(sum==k) return 1;
        return 0;
    } 
    sum+=a[i]; 
    if(subsequencesBool(i+1,a,sum,k)) return true;
 
    sum-=a[i]; 
    if(subsequencesBool(i+1,a,sum,k)) return true;

    return false;
}


// Print count of Subsequences whose sum is K
int subsequencesCount(int i,vector<int> a,int sum,int k){
    if(i>=a.size()){
        if(sum==k) return 1;
        return 0;
    } 
    sum+=a[i]; 
    int take = subsequencesCount(i+1,a,sum,k);
 
    sum-=a[i]; 
    int notTake = subsequencesCount(i+1,a,sum,k);

    return take+notTake;
}


// Print Subsequences of a string
void subsequencesStr(int i,string s,string res){
    if(i>=s.length()){
        cout<<res<<endl;
        return;
    }
    res.push_back(s[i]);
    subsequencesStr(i+1,s,res);  

    res.pop_back();
    subsequencesStr(i+1,s,res);
}


int main() { 
    vector<int> a,res; a.push_back(3); a.push_back(1); a.push_back(2); a.push_back(1);
    // subsequences(0,a,res);
    // subsequencesK(0,a,res,0,3);
    // cout<<subsequencesCount(0,a,0,3);
    // cout<<subsequencesBool(0,a,0,1);
    // subsequencesStr(0,"gfg","");
    return 0;
}
