#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(0));
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
    /*int t[10];
    int n, sum = 0, max = 0;
    double s;
    cout << "Podaj liczbe: ";
    cin >> n;
    if (n >= 1 && n <= 10) {
        for (int i = 0; i < n; i++) {
            cout << "Podaj liczbe " << i + 1 << ": ";
            cin >> t[i];
        }

        for (int i = n; i < 10; i++) {
            t[i] = 0;
        }

        int min = t[0];

        for (int i = 0; i < 10; i++) {
            sum += t[i];

            if (t[i] < min) min = t[i];

            if (t[i] > max) max = t[i];
        }

        s = sum / 10;

        cout << "Srednia z wartosci tablicy wynosi: " << s 
             << "\nMaksymalna wartosc w tablicy wynosi: " << max
             << "\nMinimalna wartosc w tablicy wynosi: " << min;
    } else {
        cout << "Liczba musi byc z zakresu 1-10!";
    }*/

    // Zadanie 5
    /*int t[10];
    int num = rand() % 11;
    int sum = 0;

    for (int i = 0; i < 10; i++) {
        t[i] = rand() % 11;
        if (t[i] == num) sum++;
    }
    cout << "Szczesliwa liczba znajduje sie " << sum << " razy w tablicy";*/

    // Zadanie 6
    /*int m1[5][5], m2[5][5], m3[5][5];
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            m1[i][j] = (rand() % 10) + 1;
            m2[i][j] = (rand() % 10) + 1;
            m3[i][j] = m1[i][j] + m2[i][j];
        }
    }

    cout << "Wynik dodawania:" << endl;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << m3[i][j] << " ";
        }
        cout << endl;
    }*/

    // Zadanie 7
    /*int m1[5][5], m2[5][5], m3[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            m1[i][j] = (rand() % 10) + 1;
            m2[i][j] = (rand() % 10) + 1;
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            m3[i][j] = 0;

            for (int k = 0; k < 5; k++) {
                m3[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    cout << "Wynik mnozenia:" << endl;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << m3[i][j] << " ";
        }
        cout << endl;
    }*/

    // Zadanie 8
    /*int x, y;
    cout << "Podaj ilosc wierszy macierzy: ";
    cin >> x;
    cout << "Podaj ilosc kolumn macierzy: ";
    cin >> y;
    int** t = new int*[x];

    for (int i = 0; i < x; i++) t[i] = new int[y];

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cout << "Podaj element dla miejsca " << i << " " << j << ": ";
            
            cin >> t[i][j];
        }
    }

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
             if (i == j) cout << t[i][j] << " ";
        }
    }

    for (int i = 0; i < x; i++) delete[] t[i];

    delete[] t;*/

    // Zadanie 9
    /*int t[10];
    for (int i = 0; i < 10; i++) {
        cout << "Podaj " << i + 1 << " liczbe: ";
        cin >> t[i];
    }

    int tmp = 0;

    for (int i = 0; i < 10; i++) {
        for (int j = 1; j < 10; j++) {

            if (t[j - 1] > t[j]) {
                tmp = t[j - 1];
                t[j - 1] = t[j];
                t[j] = tmp;
            }
        }
    }

    cout << "Posortowana tablica: ";

    for (int i = 0; i < 10; i++) cout << t[i] << " ";*/

    // Zadanie 10
    /*int t[8][8];
    int sum_wier[8] = { 0 };
    int sum_kol[8] = { 0 };
    int sum_all = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            t[i][j] = (rand() % 10) + 1;

            sum_all += t[i][j];
        }
    }

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            sum_wier[i] += t[i][j];
            sum_kol[j] += t[i][j];
        }
    }

    cout << "Suma wszystkich elementow macierzy wynosi: " << sum_all;*/

    // Zadanie 11
    /*int t[8][6], min_arg[2] = { 0, 0 }, max_arg[2] = { 0, 0 };

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 6; j++) {
            t[i][j] = (rand() % 10) + 1;
        }
    }

    int min = t[0][0], max = 0;

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 6; j++) {
            if (t[i][j] > max) {
                max = t[i][j];
                max_arg[0] = i;
                max_arg[1] = j;
            }
            if (t[i][j] < min) {
                min = t[i][j];
                min_arg[0] = i;
                min_arg[1] = j;
            }
        }
    }

    cout << "Największa wartosc w macierzy wynosi: " << max << " i znajduje sie na wspolrzednych o wartosciach x: " << max_arg[0] << " i y: " << max_arg[1] 
         << "\nNajmniejsza wartosc w macierzy wynosi: " << min << " i znajduje sie na wspolrzednych o wartosciach x: " << min_arg[0] << " i y: " << min_arg[1];*/

    // Zadanie 12
    /*int t[6][6];
    int sum = 0;

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            t[i][j] = (rand() % 10) + 1;
        }
    }

    for (int i = 5; i >= 0; i--) {
        for (int j = 5; j >= 0; j--) {
            if (i == j) cout << t[i][j] << " ";
        }
    }*/

    // Zadanie 13
    /*int t[5][5];
    bool sym = true;
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            t[i][j] = (rand() % 10) + 1;
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (t[i][j] != t[j][i]) { sym = false; break; }
        }
        if (!sym) break;
    }

    if (sym) cout << "Macierz jest symetryczna";
    else cout << "Macierz nie jest symetryczna";*/
    
    // Zadanie 14
    /*int t[6][6];
    double k;
    cout << "Podaj liczbe: ";
    cin >> k;

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            t[i][j] = (rand() % 10) + 1;
            cout << t[i][j] * k << " ";
        }
        cout << endl;
    }*/

    // Zadanie 15
    /*int t[8][4];
    int n, ilosc = 0;
    cout << "Podaj liczbe ktora ma byc znaleziona: ";
    cin >> n;

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 4; j++) {
            t[i][j] = (rand() % 10) + 1;
            if (t[i][j] == n) {
                ilosc++;

                cout << "liczba znaleziona na pozycji " << i << " " << j << endl;
            } 
        }
    }

    if (ilosc > 0) cout << "Liczba wystapien: " << ilosc;
    else cout << "Nie znaleziono takiej liczby";*/

    // Zadanie 16
    /*int t[5][5];
    bool jednostkowa = true;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            t[i][j] = (rand() % 10) + 1;
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == j && t[i][j] != 1) { jednostkowa = false; break; }
            if (i != j && t[i][j] != 0) { jednostkowa = false; break; }
        }
        if (!jednostkowa) break;
    }

    if (jednostkowa) cout << "Macierz jest jednostkowa";
    else cout << "Macierz nie jest jednostkowa";*/

    // Zadanie 17
    /*int x, y, nr_wier = 1, nr_kol = 1;
    
    cout << "Podaj ilosc wierszy: ";
    cin >> x;
    cout << "Podaj ilosc kolumn: ";
    cin >> y;
    int* sum_wier = new int[x]();
    int* sum_kol = new int[y]();
    int** t = new int*[x];
    for (int i = 0; i < x; i++) t[i] = new int[y];

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cout << "Podaj liczbe na pozycji: " << i + 1 << " " << j + 1 << ": ";
            cin >> t[i][j];
        }
    }

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            sum_wier[i] += t[i][j];
            sum_kol[j] += t[i][j];
        }
    }

    int sum_najw_wier = sum_wier[0], sum_najw_kol = sum_kol[0];

    for (int i = 0; i < x; i++) {
        if (sum_wier[i] > sum_najw_wier) {
            sum_najw_wier = sum_wier[i];
            nr_wier = i + 1;
        }
    }

    for (int i = 0; i < y; i++) {
        if (sum_kol[i] > sum_najw_kol) {
            sum_najw_kol = sum_kol[i];
            nr_kol = i + 1;
        }
    }

    cout << "Najwieksza suma wierszy wynosi: " << sum_najw_wier << " i jest to " << nr_wier << " wiersz"
        << "\nNajwieksza suma kolumn wynosi: " << sum_najw_kol << " i jest to " << nr_kol << " kolumna";

    for (int i = 0; i < x; i++) delete[] t[i];
    delete[] t;

    delete[] sum_wier;
    delete[] sum_kol;*/
}