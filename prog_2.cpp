#include<bits/stdc++.h>
using namespace std;


int main() {
    vector<int> zoom = {5, 6, 11, 17};
    
    for (int i = 0; i < zoom.size(); i++) {
        
        for (int j = i; j < zoom.size(); j++) {
            cout << zoom[j] << " ";
        }
        cout <<endl;
    }

    return 0;
}