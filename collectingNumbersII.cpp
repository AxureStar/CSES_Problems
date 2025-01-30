#include <iostream>
using namespace std;

int main(){
    int size, operations;
    cin >> size >> operations;
    int arr[size+1];
    int set[size+1];
    for(int i = 1; i <= size; i++){
        int temp;
        cin >> temp;
        arr[i] = temp;
        set[temp] = i;
    }
    int round = 1;
    for(int cur = 1; cur < size; cur++){
        if(set[cur+1] < set[cur]){
            round++;
        }
    }
    int place1, place2;
    for(int i = 0; i < operations; i++){
        cin >> place1 >> place2;
        if(place1 == place2){

        }
        else{
            int value1 = arr[place1];
            int value2 = arr[place2];

            if(set[value1] > set[value1 + 1]){
                round--;
            }
            if(set[value1] < set[value1 - 1]){
                round--;
            }
            if(set[value2] > set[value2 + 1]){
                round--;
            }
            if(set[value2] < set[value2 - 1]){
                round--;
            }

            if (abs(value1 - value2) == 1) {
                if (value1 < value2 && set[value1] > set[value2]) {
                    round++;
                }
                if (value1 > value2 && set[value2] > set[value1]) {
                    round++;
                }
            }

            arr[place1] = value2;
            arr[place2] = value1;

            set[value1] = place2;
            set[value2] = place1;

            

            if (set[value1] < set[value1 - 1]) {
                round++;
            }
            if (set[value1] > set[value1 + 1]) {
                round++;
            }
            if (set[value2] < set[value2 - 1]) {
                round++;
            }
            if (set[value2] > set[value2 + 1]) {
                round++;
            }

            if (abs(value1 - value2) == 1) {
                if (value1 < value2 && set[value1] > set[value2]) {
                    round--;
                }
                if (value1 > value2 && set[value2] > set[value1]) {
                    round--;
                }
            }
            //this one sucks so much, spent waaaayyy tooo mych time on this
        }
        cout << round << endl;
    }
}