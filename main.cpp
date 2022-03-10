#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    double a[5][5];
    for(int i = 0;i<4;i++){
        for(int j = 0;j<4;j++){
            cin >> a[i][j];
        }
    }
    for(int i = 1;i<4;i++){
        double add = -1*a[i][0]*1.0/a[0][0];
        for(int j = 0;j<4;j++){
            a[i][j] = a[i][j]+add*a[0][j];
        }
    }
    for(int i = 2;i<4;i++){
        double add = -1*a[i][1]*1.0/a[1][1];
        for(int j = 0;j<4;j++){
            a[i][j] = a[i][j]+add*a[1][j];
        }
    }
    double add = -1*a[3][2]*1.0/a[2][2];
    a[3][2] = 0;
    a[3][3] = a[3][3]+add*a[2][3];
    /*for(int i = 0;i<4;i++){
        for(int j = 0;j<4;j++){
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }*/
    double ans = a[0][0]*a[1][1]*a[2][2]*a[3][3];
    cout << ans;
    return 0;
}
