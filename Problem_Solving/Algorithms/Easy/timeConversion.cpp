#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    /*
     * Write your code here.
     */
    if(s.substr(s.size()-2, s.size()) == "PM")
    {
        if(s.substr(0,2) == "12")
            return s.substr(0, s.size()-2);
        s[0]++; s[1] += 2;
        return s.substr(0, s.size()-2);
    }
    if(s.substr(0,2) == "12")
        return "00" + s.substr(2, s.size()-4);
    return s.substr(0, s.size()-2);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

