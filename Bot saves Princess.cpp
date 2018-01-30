//https://www.hackerrank.com/challenges/saveprincess

#include <cstdio>
#include <iostream>
#include <vector>
#include <cmath>
#include <vector>
using namespace std;

pair<int,int> princess;
pair<int,int> me;

char buffer[110];

void printRes() {
    int diffX = princess.first - me.first;
    int diffY = princess.second - me.second;
    string s1 = diffX > 0 ? "DOWN" : "UP";
    string s2 = diffY > 0 ? "RIGHT" : "LEFT";

    for(int i=0;i<abs(diffX);++i) cout << s1 << endl;
    for(int i=0;i<abs(diffY);++i) cout << s2 << endl;
}


/* Head ends here */
void nextMove(int m, vector <string> grid){
    for(int i=0;i<m;++i) {
        for (int j=0;j<m;++j) {
            if (grid[i][j] == 'm' ) me = make_pair(i, j);
            if (grid[i][j] == 'p' ) princess = make_pair(i, j);
        }
    }
    printRes();
}
/* Tail starts here */
int main() {

    int m;
    vector <string> grid;

    cin >> m;

    for(int i=0; i<m; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    nextMove(m,grid);

    return 0;
}
