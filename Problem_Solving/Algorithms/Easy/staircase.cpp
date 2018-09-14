#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) 
{
    string stairs = "#", air = string(n-1, ' ');
    for(int i = 0; i < n; i++, stairs += "#", air.pop_back())
        cout << air << stairs << endl;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}

