//Author: Vashvi Rank
#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        if(n < 11) cout << s << endl;
        else cout << s[0] << n-2 << s[n-1] << endl;
    }
    return 0;
}
