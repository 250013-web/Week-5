#include <iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    int a, b

    return 0;
/*
 Problem 5
int main () {
    int x;
    cin >> x;
    int y=0;
    char t;
    int b=0, a=0, l=0, o=0, n=0;

    while (x > 0) {
        cin >> t;
        switch (t) {
            case 'b': b++;
            case 'a': a++;
            case 'l': l++;
            case 'o': o++;
            case 'n': n++; break;
        }
    }
    while ( b>0 && a>0 && l>0 && o>0 && n>0) {
        b--;
        a--;
        l -= 2;
        o -= 2;
        n--;
        y++;
    }
cout << y;
    return 0;
}
*/
/*
Problem 1
#include <iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    if (n % 2 == 0) {
        n--;
        while (n > 0) {
            cout << 'a';
            n--;
        }
        cout << 'b';
    } else {
        while (n > 0) {
            cout << 'a';
            n--;
        }
    }
    return 0;
}
*/
/*
Problem 2
#include <iostream>
using namespace std;
int main () {
    int x;
    int rev = 0;
    int d;
    cin >> x;
    int t = x;
    while (t >= 1) {
        rev = rev * 10;
        d = t % 10;
        rev += d;
        t = t / 10;
    }
    if (rev == x) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}
*/

/*
Problem 3
#include <iostream>
using namespace std;
int main () {
    int n;
    int x;
    int c = 0;
    int i = 0;
    int max_c = 0;
    cin >> n;
    while (i < n) {
        cin >> x;
        if (x != 1) {
            i++;
            c = 0;
            continue;
        }
        c++;
        if (c > max_c) {
            max_c = c;
        }
        i++;

    } cout << max_c << endl;
    return 0;
}
*/