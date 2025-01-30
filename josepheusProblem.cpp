#include <iostream>
#include <list>
using namespace std;

void removeEverySecond(int n) {
    list<int> children;
    
    for (int i = 1; i <= n; i++) {
        children.push_back(i);
    }

    list<int>::iterator it = children.begin(); 

    while (!children.empty()) {

        it++;
        if (it == children.end()) {
            it = children.begin();
        }

        cout << *it << " "; 


        it = children.erase(it);
        
        if (it == children.end()) {
            it = children.begin();
        }

        if (children.empty()) {
            break;
        }
    }
}

int main() {
    int n;
    cin >> n;
    removeEverySecond(n);
    return 0;
}
