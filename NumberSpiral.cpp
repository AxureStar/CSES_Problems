#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int num;
    cin >> num;
    cout << fixed << setprecision(0);
    for(int i = 0; i < num; i++){
        long long x, y;
        cin >> y >> x;
        if(x > y){
            if(x % 2 != 0){
                long long max = x*x;
                cout << max - (y-1) << endl;
            }
            else{
                long long max = ((x-1)*(x-1))+1;
                cout << max + (y-1) << endl;
            }
        }
        else{
            if(y % 2 == 0){
                long long max = y*y;
                cout << max - (x-1) << endl;
            }
            else{
                long long max = ((y-1)*(y-1))+1;
                cout << max + (x-1) << endl;
            }
        }
    }

    return 0;
}