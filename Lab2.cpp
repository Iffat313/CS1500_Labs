
#include <iostream>
using namespace std;

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
            cout << ((values[i][j] and values[i][j+1]) or (values[i][j] and values[i][j + 2]));
            cout << "\n";
            break;
        }
    }

    cout << "\n";
    
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 3; j++) {
            cout << ((values[i][j] and values[i][j+2]) and (values[i][j+1] and !values[i][j+2]));
            cout << "\n";
            break;
        }
    }

    cout << "\n";

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 3; j++) {
            cout << ((values[i][j] or values[i][j+1]) and !(values[i][j+1] or values[i][j+2]));
            cout << "\n";
            break;
        }
    }

    cout << "\n";

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 3; j++) {
            cout << ((values[i][j] or (values[i][j+1] and values[i][j+2])) and (!values[i][j] and !values[i][j+1]));
            cout << "\n";
            break;
        }
    }
    
    cout << "\n";
    int x;
    int y;
    int g;

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 3; j++) {
            x = (values[i][j+1] and values[i][j + 2]);
            y = (values[i][j + 2] and values[i][j]);
            g = (!(values[i][j] or values[i][j + 1]) and values[i][j + 2]);
            cout << x or y and g;
            cout << "\n";
            break;
        }
    }

}




