#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    cout << fixed << setprecision(0);
    int size;
    cin >> size;
    double arr[size];
    for(double &a: arr){
        cin >> a;
    }

    double total = 0;
    for(int i = 1; i < size; i++){
        if(arr[i] < arr[i-1]){
            double change = arr[i-1] - arr[i];
            total += change;
            arr[i] += change;
        }
    }
    cout << total;
    return 0;
}