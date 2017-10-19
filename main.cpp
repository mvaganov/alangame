#include <iostream>
using namespace std;
int main() {
    int width = 20, height = 15, x = 4, y = 5;
    char playerIcon = '@', userInput = 0;
    while(userInput != 'q') {
        for(int row = 0; row < height; row++) {
            for(int col = 0; col < width; col++) {
                if(row == y && col == x) cout << playerIcon;
                else cout << '.';
            }
            cout << endl;
        }
        cin >> userInput;
        if(userInput == 'w') { y--; }
        if(userInput == 'a') x--;
        if(userInput == 's') y++;
        if(userInput == 'd') { x++; }
    }
    return 0;
}