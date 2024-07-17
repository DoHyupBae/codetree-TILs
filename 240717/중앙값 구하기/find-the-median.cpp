#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    
    vector<int> three(3, 0);
    for(int i = 0; i < 3; i++){
        cin >> three[i];
    }
    sort(three.begin(), three.end());

    cout << three[1];

    return 0;
}