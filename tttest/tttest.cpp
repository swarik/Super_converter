#include <iostream>
#include <string>

using namespace std;
int main()
{
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
    string s = "(xxx) xxx-xxxx";
    int it = 0;
    while (it<10) s = s.replace(s.find("x"),1, 1, '0' + arr[it++]);
    cout << s << endl;
    return 0;
 }
