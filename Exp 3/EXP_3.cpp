#include <iostream>
#include<vector>
#include<map>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
   map<int,int> freq;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        freq[arr[i]]++;
    }
     vector<vector<int>> res;
        for (auto &x : freq) {
            res.push_back({x.first, x.second});
        }

    for (auto &pair : res) {
        cout << "[" << pair[0] << ", " << pair[1] << "] ";
    }
    


    return 0;
}

