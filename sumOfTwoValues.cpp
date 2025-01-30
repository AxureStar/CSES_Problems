#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    int size;
    long value;
    cin >> size >> value;
    long arr[size];
    unordered_map<long, int> set;
    set.reserve(size);
    for(long &a: arr){
        cin >> a;
    }
    for(int i = 0; i < size; i++){
        set[arr[i]] = i;
    }
    bool found = false;
    for(int i = 0; i < size; i++){
        long temp = value - arr[i];
        if(set.count(temp) != 0 && set[temp] != i){
            cout << i+1 << " " << set[temp]+1;
            found = true;
            return 0;
        }
    }
    if(!found){
        cout << "IMPOSSIBLE";
    }
}