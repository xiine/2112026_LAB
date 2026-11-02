#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // Zadanie 1
    /*int t[10];
    for (int i = 0; i <= 9; i++) {
        cout << "Podaj " << i + 1 << " liczbe: ";
        cin >> t[i];
    }
    for (int i = 9; i >= 0; i--) {
        cout << t[i] << endl;
    }*/
    
    // Zadanie 2
    /*int n;
    cout << "Podaj liczbe: ";
    cin >> n;
    int* t = new int[n];
    t[0] = 0;
    t[1] = 1;
    for (int i = 2; i < n; i++) {
        t[i] = t[i - 1] + t[i - 2];
    }

    for (int i = 0; i < n; i++) {
        cout << t[i] << endl;
    }
    delete[] t;*/

    // Zadanie 3
    /*int t[10];
    srand(time(0));
    for (int i = 0; i < 10; i++) {
        t[i] = rand() % 10;
    }

    int sum = 0, s = 0, min = t[0], max = 0;
    for (int i = 0; i < 10; i++) {
        sum += t[i];
        if (t[i] > max) { max = t[i]; }
        if (t[i] < min) { min = t[i]; }
    }
    s = sum / 10;
    cout << "Srednia wynosi: " << s << ", liczba minimalna to: " << min << ", a liczba maksymalna to: " << max;*/

    // Zadanie 4
    int t[10];
    int n, x;
    cout << "Podaj liczbe: ";
    cin >> n;
    if (n >= 1 && n <= 10) {
        for (int i = 0; i < n; i++) {
            cout << "Podaj liczbe " << i + 1 << ": ";
            cin >> x;
            t[i] = x;
        }
    }

}