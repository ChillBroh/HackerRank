#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	stringstream s(str);
    vector<int> result;
    char comma;
    int num;
    while(s >> num){ //work as cin. the type of num is integer. so it will only get intergers from str
        result.push_back(num); //integers will push into result vector
        s >> comma; //integers separated by the commas. so we must also read commas. otherwise while loop will end because comma is a charachter
    }
    return result;
    
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}