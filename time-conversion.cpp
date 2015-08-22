//Author - Parag

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    cin>> s;
    int hr=(s[0] - 48)*10+(s[1] - 48);
    char ap = s[8];
    if(ap == 'P')
    {
        hr=hr+12;
    }
    else{
        if(hr == 12)
        {
            hr=0;
        }
    }
    printf("%02d",hr);
    cout << s.substr(2, 6) << endl;
    return 0;
}


