
/*
INPUT: 주민등록 번호
OUTPUT: 나이와 성별
*/

#include <iostream>
#include <string>
using namespace std;
#define stand 2021

int main() {
    char arr[20];
    string gender;
    int year = 0, age = 0;
    cin >> arr;

    if (arr[7] == '1' || arr[7] == '2') year = 1900 + ((arr[0]-48)*10 + (arr[1]-48));
    else year = 2000 + ((arr[0]-48)*10 + (arr[1]-48));

    age = stand - year + 1;

    if (arr[7] == '1' || arr[7] == '3') gender = "M";
    else if (arr[7] == '2' || arr[7] == '4')  gender = "W";
    else gender = "Error";

    cout << age << " " << gender << endl;

    return 0;
}