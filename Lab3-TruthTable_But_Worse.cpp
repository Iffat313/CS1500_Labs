#include <iostream>
using namespace std;

int Nor(int x1, int y1) {
    return !(x1 || y1);
}

void xxor(int x2, int y2) { //xor
    if (x2 != y2) {
        cout << 1 << "\n";
    }

    if (x2 == y2) {
        cout << 0 << "\n";
    }
}



//

int implies(int x3, int y3) {
    if (x3 <= y3) {
        return 1;
    }

    else {
        return 0;
    }
}

int xnor(int x4, int y4) {
    if (x4 == y4) {
        return 1;
    }
    else {
        return 0;
    }
}

int x_xor(int x5, int y5) {
    if (x5 != y5) {
        return 1;
    }

    else {
        return 0;
    }
}


int main()
{
    int values[8][3] = {
       {0,0,0},
       {0,0,1},
       {0,1,0},
       {0,1,1},
       {1,0,0},
       {1,0,1},//5
       {1,1,0},
       {1,1,1}
    };



    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 3; j++) {
            int a = values[i][j];
            int b = values[i][j + 2];
            int c = Nor(a, b);
            int d = values[i][j + 1];
            xxor(c, d);
            break;


        }


    }
    cout << "\n";

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 3; i++) {
            int a2 = values[i][j + 1]; //B
            int b2 = values[i][j + 2]; //C
            int c2 = values[i][j]; //A
            int d2 = values[i][j + 1]; //B

            int e3 = implies(a2, b2);
            int r3 = Nor(c2, d2);
            cout << !(e3 and r3) << "\n";
            break;
        }
    }

    cout << "\n";

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 3; j++) {
            int c3 = values[i][j]; //A
            int d3 = values[i][j + 1]; //B
            int b3 = values[i][j + 2]; //C

            int e4 = x_xor(c3, d3);
            int r4 = xnor(d3, b3);
            if (e4 <= r4) {
                cout << 1 << "\n";
            }
            else {
                cout << 0 << "\n";
            }

            break;

        }
    }

    cout << "\n";


    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 3; j++) {
            int c4 = values[i][j]; //A
            int d4 = values[i][j + 1]; //B
            int b4 = values[i][j + 2]; //C

            int e5 = implies(c4, d4);
            int b5 = !b4;

            if (e5 <= b5) {
                cout << 1 << "\n";
            }

            else {
                cout << 0 << "\n";
            }

            break;
        }
    }



}


