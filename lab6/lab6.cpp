#include <iostream>
#include <string>
#define SIZE 26
using namespace std;

struct TrieElement {
    TrieElement* child[SIZE];
    string translation;
    bool wordEnd;
};

struct TrieElement* newElement() {
    TrieElement* newElement = new TrieElement;
    newElement->wordEnd = false;
    for (int i = 0; i < SIZE; i++) {
        newElement->child[i] = nullptr;
    }
    return newElement;
}

void insert(TrieElement* root, string word, string translation) {
    TrieElement* tmpElement = root;
    for (int i = 0; i < word.length(); i++) {
        int index = word[i] - 'a';
        if (!tmpElement->child[index]) {
            tmpElement->child[index] = newElement();
        }
        tmpElement = tmpElement->child[index];
    }
    tmpElement->wordEnd = true;
    tmpElement->translation = translation;
}

void search(TrieElement* root, string word) {
    TrieElement* tmp = root;
    if (tmp == nullptr) {
        cout << "-" << endl;
        return;
    }
    
    for (int i = 0; i < word.length(); i++) {
        int index = word[i] - 'a';
        if (!tmp->child[index]) {
            cout << "-" << endl;
            return;
        }
        else tmp = tmp->child[index];
    }
    if (tmp != nullptr && tmp->wordEnd) {
        cout << tmp->translation << endl;
    }
    else cout << "-" << endl;
}

void findWords(TrieElement* root) {
    TrieElement* tmp = root;

    if (tmp->wordEnd == true) {
        cout << tmp->translation << endl;
    }

    for (int i = 0; i < SIZE; i++) {
        if (tmp->child[i] != nullptr) {
            findWords(tmp->child[i]);
        }
    }
}

void prefixSearch(TrieElement* root, string prefix) {
    TrieElement* tmp = root;
    if (tmp == nullptr) {
        cout << "-" << endl;
        return;
    }

    for (int i = 0; i < prefix.length(); i++) {
        int index = prefix[i] - 'a';
        if (!tmp->child[index]) {
            cout << "-" << endl;
            return;
        }
        else tmp = tmp->child[index];
    }
    if (tmp == nullptr) return;
    findWords(tmp);
}

int main() {
    string command, word, translation, prefix;
    TrieElement *root = newElement();
    while (cin >> command) {
        if (command == "q") break;
        else if (command == "+") {
            cin >> word >> translation;
            insert(root, word, translation);
        }
        else if (command == "?") {
            cin >> word;
            search(root, word);
        }
        else if (command == "*") {
            cin >> prefix;
            prefixSearch(root, prefix);
        }
    }
    return 0;
}