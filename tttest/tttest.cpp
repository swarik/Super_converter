#include <iostream>
#include <string>
#include <map>

using namespace std;
int main()
{
    setlocale(0, "");


    map <int, string> conv1 = { {1, "I" },{2, "II"},{3, "III"},{4, "IV"},{5, "V"},{6, "VI"},{7, "VII"},{8, "VIII"},{9, "IX"},
                                {10, "X"},{20, "XX"},{30, "XXX"},{40, "XL"},{50, "L"},{60, "LX"},{70, "LXX"},{80, "LXXX"},{90, "XC"},
                                {100, "C"},{200, "CC"},{300, "CCC"},{400, "CD"},{500, "D"},{600, "DC"},{700, "DCC"},{800, "DCCC"},{900, "CM"},
                                {1000, "M"},{2000, "MM"},{3000, "MMM"}
    };  


    // Перевод из арабских в римские
    int n = 123;
        int osn = 1, t1, t2;
        string res = "";
        t1 = n;
        while (t1) {
            t2 = t1 % 10;
            t1 = t1 / 10;
            res = conv1[t2 * osn] + res;
            osn *= 10;
        }
        cout << res << endl;
    // **********************************
    // Перевод из римских в арабские
    string str = res;
        string temp_s = "";
        int num = 0;
        while (!str.empty()) {
            map <int, string> ::iterator it = conv1.end();
            do {
                it--;
                temp_s = it->second;
            } while (str.find(temp_s) != 0);
            num += it->first;
            str = str.substr(temp_s.size());
        }
        cout << num << endl;
    // ***********************************
 }