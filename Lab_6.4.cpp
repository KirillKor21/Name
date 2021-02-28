#include <iostream>
#include <string>
#include <set>
#include <vector>
/*4
xxx 27
yyy 18
xxx 29
mmm 11

*/ 


using namespace std;

int main()
{
    set <string> logins;
    vector <string> logins_pt;
    int n, size = 0;
    string login, pt;
    cout << "Input n = ";
    cin >> n;
    

    for (int i = 0; i < n; i++) {
        cin >> login >> pt;
        logins.insert(login);
        if (logins.size() > size) {
            logins_pt.push_back(login + "\t|   " + pt);
        }
        size = logins.size();
    }

    cout << "login\t|   point" << endl;
    for (int i = 0; i < logins_pt.size(); i++) {
        cout << logins_pt[i] << endl;
    }
}

