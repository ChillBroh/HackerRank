#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> v1;
    for (int i = 0; i < n; i++){
        int value;
        cin >> value;
        v1.push_back(value);
    }  
    cout << "before sorting" << endl;
     for(auto j=v1.begin(); j<v1.end(); j++)
    {
        cout<<*j<<" ";
    }
    sort(v1.begin(),v1.end());
     cout << endl << "After sorting" << endl;
     for(auto j=v1.begin(); j<v1.end(); j++)
    {
        cout<<*j<<" ";
    }

    return 0;
}
