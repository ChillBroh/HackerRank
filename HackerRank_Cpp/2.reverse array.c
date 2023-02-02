#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i;
    
	cout << "Enter size of the array ";
	cin  >> n;
	int arr[n];
	//initilize array
	for (i = 0; i < n;i++){
		cout << "Enter values for array : ";
		cin >> arr[i];
	} 
	//print reverse of array
	
	for(i >= 0; i--){
		cout << arr[i];
	}
	
    return 0;
}
