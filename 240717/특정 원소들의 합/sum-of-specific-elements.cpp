#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int map[4][4];
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cin >> map[i][j];
        }
    }

    int sum = 0;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j <= i; j++){
            sum += map[i][j];
        }
    }

    cout << sum;
    return 0;
}