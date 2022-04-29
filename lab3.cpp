//ta wersja nie przeszla automatycznych testow na stosie bo termin uplynal :(
//improvment z o(n) do o(1.2)
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int getChar(char number);
int compareStrings(string first, string second);
void shellSort(int n, string *numbers);

void shellSort(int n, string *numbers) {
    int k = pow(2.0, log2(n)) - 1;
    string temp;
    while(k >= 1) {
        for(int i = k; i < n; i++) {
            string x = numbers[i];
            int j = i;
            while((j >= k) && (compareStrings(x, numbers[j-k]) == 1)) {
                numbers[j] = temp;
                numbers[j] = numbers[j-k];
                numbers[j-k] = temp;
                j = j - k;
            }
            numbers[j] = x;
        }
        k = (k+1)/2 - 1;
    }
}

int main() {
    int n; //number of elements
    cin >> n;
    string* numbers = new string[n];
    cin.ignore();
    for(int i = 0; i < n; i++) cin >> numbers[i];
    shellSort(n, numbers);
    for(int i = 0; i < n; i++) cout << numbers[i] << endl;
    delete[] numbers;
    return 0;
}

int compareStrings(string first, string second) {
    //0 for first string bigger, 1 for second, 2 for equal
    if(first[0] == '-') {
        if(second[0] != '-') return 1;
    }
    if(second[0] == '-') {
        if(first[0] != '-') return 0;
    }

    if (first[0] == '-' && second[0] == '-') {
        if (first.length() > second.length()) return 1;
        if (second.length() > first.length()) return 0;

        for (int i = 0; i < first.length(); i++) {
            if (getChar(first[i]) > getChar(second[i])) return 1;
            if (getChar(second[i]) > getChar(first[i])) return 0;
        }
    }
    else {
        if (first.length() > second.length()) return 0;
        if (second.length() > first.length()) return 1;

        for (int i = 0; i < first.length(); i++) {
            if (getChar(first[i]) > getChar(second[i])) return 0;
            if (getChar(second[i]) > getChar(first[i])) return 1;
        }
    }

    return 2;
}

int getChar(char number) {
    if (number == '0') return 0;
    if (number == '1') return 1;
    if (number == '2') return 2;
    if (number == '3') return 3;
    if (number == '4') return 4;
    if (number == '5') return 5;
    if (number == '6') return 6;
    if (number == '7') return 7;
    if (number == '8') return 8;
    if (number == '9') return 9;
    return 0;
}
