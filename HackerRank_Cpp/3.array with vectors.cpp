#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n , q;
    int arr, index,size,value;
    cin >> n >> q;
    vector<vector<int>> v1; //for 2diamentional arrays  ..... this one create new vector for each row
    for (int i = 0; i < n ; i++ ){
        cin >> size;
        vector<int> v2;
        for(int j = 0 ; j < size; j++){
            cin >> value;
            v2.push_back(value); // v2 gets values to a 1D array
        }
        v1.push_back(v2); //v1 be like v1 = {{x,x,x},{x,x,x,x,x}};
    } 
    for(int i = 0 ; i < q; i++){
        cin >> arr;
        cin >> index;
        cout << v1[arr][index] << endl;
    }
    
    return 0;
}