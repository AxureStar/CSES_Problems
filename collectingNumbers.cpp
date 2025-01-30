#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int positions[n+1];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        positions[arr[i]] = i;
    }
    int cur = 1;
    int run = 1;
    while(cur + 1 <= n){
        if(positions[cur] > positions[cur+1]){
            run++;
            cur++;
        }
        else{
            cur++;
        }
    }
    cout << run;
    return 0;
}