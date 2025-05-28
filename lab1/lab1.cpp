include <iostream>
using namespace std;
bool rosnacy(int *tab);
int szukaj(int *tab, int value, int left, int right, int mid, bool ascending);

int main() {
    int s;
    cin >> s;
    for (int i = 0; i < s; i++) {
        int n, index, p, value;
        bool ascending;
        cin >> n;
        int left = 0, right = n - 1, mid = (left + right) / 2;
        int *tab = new int[n];
        for (int j = 0; j < n; j++) {
            cin >> tab[j];
        }
        if(rosnacy(tab)) ascending = true;
        else ascending = false;
        cin >> p;
        for (int j = 0; j < p; j++) {
            cin >> value;
            index = szukaj(tab, value, left, right, mid, ascending);
            cout << index << endl;
        }
        delete[] tab;
    }
    return 0;
}

int szukaj(int *tab, int value, int left, int right, int mid, bool ascending) {
    while(left <= right) {
        if(tab[mid] == value) return mid;
        if(ascending) {
            if(value > tab[mid]) left = mid + 1;
            else right = mid - 1;
        }
        else {
            if(value > tab[mid]) right = mid - 1;
            else left = mid + 1;
        }
        mid = (left + right) / 2;
    }
    return -1;
}

bool rosnacy(int *tab) {
    if(tab[0] > tab[1]) return false;
    return true;
}
