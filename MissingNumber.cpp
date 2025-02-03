#include <iostream>

using namespace std;

int main(){
    int size;
    cin >> size;
    bool arr[size+1];
    for(int i = 0; i <= size; i++){
        arr[i] = false;
    }
    for(int i = 1; i < size; i++){
        int temp;
        cin >> temp;
        arr[temp] = true;
    }
    for(int i = 1; i <= size; i++){
        if(!arr[i]){
            cout << i;
        }
    }

    return 0;
}