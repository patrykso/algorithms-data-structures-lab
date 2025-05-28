#include <iostream>
#include <string>

#define SIZE 70429

using namespace std;

struct Element {
    string word;
    int occurances;
};

struct hashTable {
    Element **hT;

    unsigned long int hash(string word) {
        unsigned long int key = 0;
        for(int i = 0; i < word.length(); i++) {
            key += int(word[i]) * 7777;
        }
        return key % SIZE;
    }

    unsigned long int searchWord(string word) {
        unsigned long int index = hash(word);
        while (index < SIZE) {
            if (hT[index]->word == word) return index;
            else index++;
        }
        return SIZE + 1;
    }

    unsigned long int searchEmpty(string word) {
        unsigned long int index = hash(word);
        while (index < SIZE) {
            if (hT[index] == nullptr || hT[index]->word  == "DELETED") return index;
            else index++;
        }
        return SIZE + 1;
    }

    void setOccurrance(string word) {
        unsigned long int index = searchWord(word);
        if (index == SIZE + 1) return;
        hT[index]->word = "DELETED";
        hT[index]->occurances = 0;
    }

    void readOccurances(string word) {
        unsigned long int index = searchWord(word);
        if (index == SIZE + 1) cout << "0" << endl;
        else cout << hT[index]->occurances << endl;
    }

    void insert(string word) {
        unsigned long int index = searchEmpty(word);
        hT[index]->word = word;
        hT[index]->occurances = 1;
    }

};

int main() {
    string command;
    unsigned long int index = 0;
    hashTable Table;
    Table.hT = new Element * [SIZE];
    for(int i = 0; i < SIZE; i++) {
        Element *tmp = new Element;
        tmp->word = "DELETED";
        tmp->occurances = 0;
        Table.hT[i] = tmp;
    }

    while (cin >> command) {
        if (command[0] == '?') {
            command = command.substr(1, command.length() - 1);
            Table.readOccurances(command);
        }
        else if (command[0] == '-') {
            command = command.substr(1, command.length() - 1);
            Table.setOccurrance(command);
        }
        else if (command == "q") break;
        else {
            index = Table.searchWord(command);
            if (index == SIZE + 1) Table.insert(command);
            else {
                Table.hT[index]->occurances++;
            }
        }
    }
    for(int i = 0; i < SIZE; i++) {
        delete Table.hT[i];
    }
    delete [] Table.hT;
    return 0;
}