#include<bits/stdc++.h>
using namespace std; 

/*  Combination I 
QUES  ---> Given an array of integers and a sum B, 
find all unique combinations in the array where the sum is equal to B.
The same number may be chosen from the array any number of times to make B.
*/

void combination1(int i,vector<int> a,int n,int b,vector<int> &paths,vector<vector<int> > &res){
    if(i>=n){
        if(b==0) res.push_back(paths);
        return;
    }
    if(a[i]<=b){
        paths.push_back(a[i]); 
        combination1(i,a,n,b-a[i],paths,res);   // Pick but not change index as we can use one element multiple times
        paths.pop_back();
    }
    combination1(i+1,a,n,b,paths,res);  // Not Pick but not change index as we can use one element multiple types
}



/*  Combination II
    QUES -->  Given a collection of candidate numbers (candidates) and a target number (target), 
    find all unique combinations in candidates where the candidate numbers sum to target.
    Each number in candidates may only be used once in the combination.
    Note: The solution set must not contain duplicate combinations.
*/
void combination2(int i,int b,int n,vector<int> a,vector<int> &ds,vector<vector<int> > &ans){
    if(b==0) {
        ans.push_back(ds);
        return;
    }
    for(int j=i;j<n;j++){
        if(j>i && a[j]==a[j-1]) continue; 
        if(a[j]>b) break; 
        ds.push_back(a[j]);
        combination2(j+1,b-a[j],n,a,ds,ans);
        ds.pop_back();
    }
}


void subsetSum(int i,int n,int sum,vector<int> a,vector<int> &ans){
    if(i>=n) {
        ans.push_back(sum);
        return;
    }
    subsetSum(i+1,n,sum+a[i],a,ans);

    subsetSum(i+1,n,sum,a,ans);
}


/*  SUBSETS II
    QUES ---> Given an integer array nums that may contain duplicates, 
    return all possible subsets.
    The solution set must not contain duplicate subsets. Return the solution in any order.
*/
void subsets2(int i,int n,vector<int> a,vector<int> &ds,vector<vector<int> > &ans){
    ans.push_back(ds);
    for(int j=i;j<n;j++){
        if(j>i && a[j]==a[j-1]) continue;
        ds.push_back(a[j]);
        subsets2(j+1,n,a,ds,ans);
        ds.pop_back();
    }
}

void print2DVect(vector<vector<int> > res){ 
    for (int i=0;i<res.size();i++) {
        for (int j=0;j<res[i].size();j++) cout<<res[i][j]<<" "; 
        cout<<endl;
    }
}
void printVect(vector<int> res){ 
    for (int i=0;i<res.size();i++)  cout<<res[i]<<" ";  
}
 

int main() {  
    vector<int> a = {1,2,2};
    int b = 8;
    vector<int> paths;
    vector<vector<int> > res; 

    // combination1(0,a,a.size(),b,paths,res);  

    // sort(a.begin(),a.end());
    // combination2(0,b,a.size(),a,paths,res); 

    // subsetSum(0,a.size(),0,a,paths);
    // sort(paths.begin(),paths.end());
    // printVect(paths);

    // sort(a.begin(),a.end());
    // subsets2(0,a.size(),a,paths,res);

    // print2DVect(res); 
    
    return 0;
}
