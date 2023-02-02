#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i;
    

	cin  >> n;
	int arr[n];
	//initilize array
	for (i = 0; i < n;i++){

		cin >> arr[i];
	} 
	//print reverse of array
	i--;
	for(i ;i >= 0; i--){
		cout << arr[i] << " ";
	}
	
    return 0;
}
