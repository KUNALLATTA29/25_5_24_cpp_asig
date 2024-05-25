#include<bits/stdc++.h>
using namespace std;

int main(){
    int value ;
    cout<<"enter a number: ";
    cin>>value;
    
    vector<int> result;
    result.push_back(5);
    
    vector<int> diff_btw_val = {1, 1, 4, 2, 5, 6};
    int in=0;
    
    for(int i =1; i<value;i++){
        result.push_back(result.back() + diff_btw_val[in % 6]);
        in++;
    }
    
    for(auto it:result){
        cout<<it<<" ";
    }
    
    
    return 0;
}