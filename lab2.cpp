#include <iostream>
using namespace std;

struct Element
{
    int key;
    struct Element *next;
};

void wstaw(int temp_key, Element **head);
void usun(Element **head);
void pobierz(int value, Element *head);
void wyjdz(Element *head);

int main() {
    int value, temp_key;
    struct Element *head = NULL;
    char operation;
    while(cin >> operation) {
        if(operation == 'i') { //wstaw na koniec
            cin >> temp_key;
            wstaw(temp_key, &head);
        }
        else if(operation == 'd') { //usun z konca i wypisz klucz
            usun(&head);
        }
        else if(operation == 's') { //pobierz element i wypisz klucz
            cin >> value;
            pobierz(value, head);
        }
        else if(operation == 'q') { //wyjdz
            wyjdz(head);
            return 0;
        }
    }
}

void wyjdz(Element *head) {
    struct Element *current = head;
    struct Element *next = NULL;
    while(current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
}

void wstaw(int temp_key, Element **head) {
    struct Element *newElement = new Element;
    struct Element *last = *head;
    newElement->key = temp_key;
    newElement->next = NULL;
    if(*head == NULL) {
        *head = newElement;
        return;
    }
    while(last->next != NULL) {
        last = last->next;
    }
    last->next = newElement;
    return;
}

void usun(Element **head) {
    struct Element *temp = *head;
    *head = temp->next;
    delete temp;
}

void pobierz(int value, Element *head) {
    struct Element *temp = head;
    int index = 0;
    while(temp->next != NULL) {
        if(value == temp->key) {
            cout << index << endl;
            return;
        }
        else {
            temp = temp->next;
            index++;
        }
    }
    if(temp->next == NULL) {
        cout << index << endl;
        return;
    }
}
