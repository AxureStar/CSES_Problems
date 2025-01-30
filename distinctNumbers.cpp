#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    int size;
    cin >> size;
    unordered_set<long> set; 
    set.reserve(200000);   
    for(int i = 0; i < size; i++){
        long temp;
        cin >> temp;
        set.insert(temp);
    }
    cout << set.size();

}