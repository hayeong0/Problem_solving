#include <iostream>
using namespace std;

int main(){
    int A, V, B;
    cin >> A >> B >> V;
    int day;

    day = (V-B-1) / (A-B) + 1;
    cout << day << endl;

    return 0;
}