**Linked list FIFO (Lista FIFO)**<br>
Implement a linked list. Every element of the list should contain a key of type int (signed integer), and some pointers that are required by your linked list implementation.<br>
Your program should support the following operations:

    i - insert a new element to the end of your list,
    d - delete an element from the beginning of your list,
    s - search for an element of the list with a given key, and return its index or -1 if the element was not found (if there are multiple elements with the same key, the smallest of the indices should be returned),
    q - deallocate memory and quit the program.

The first element (head) of your list should be interpreted as an element on position 0, the second element is on position 1, etc.

Zaimplementuj listę wiązaną. Każdy element listy powinien zawierać klucz key typu int (signed integer), i pewną liczbę wskaźników wymaganych w Twojej implementacji listy.
Program powinien obsługiwać następujące operacje:

    i - wstaw nowy element na koniec listy,
    d - usuń element z początku listy,
    s - szukaj elementu listy o zadanym kluczu, i zwróć jego indeks lub -1 jeśli elementu nie znaleziono (w przypadku istnienia wielu elementów o takim samym kluczu, należy zwrócić najmniejszy spośród indeksów),
    q - zwolnij pamięć alokowaną dynamicznie i zakończ działanie programu.

Pierwszy element listy (head) jest interpretowany jako element na pozycji 0, kolejny element na pozycji 1, itd.<br>

**Input**<br>
Any number of lines, and each line contains one of the commands:

    i <key>
    d
    s <key>
    q

Where:

    i, d, s, q are identifiers of the operation,
    <key> is the key of an element (value of type int to be stored in the element).

You can assume that q will be always the last operation.

Dowolna liczba linii, w każdej linii jedna z komend:

    i <key>
    d
    s <key>
    q

Gdzie:

    i, d, s, q są identyfikatorami operacji,
    <key> jest kluczem elementu (wartość typu int przechowywana w elemencie listy).

Możesz założyć, że q zawsze będzie ostatnią operacją.<br>

**Output**<br>
For every s operation the index of a found element is printed (or -1 if it was not found). If there are multiple elements with the same key, the smallest of the indexes should be printed. Values should be separated by the new line character (std::endl or \n).

Dla każdego wystąpienia operacji s wypisywany jest index znalezionego elementu (lub -1, jeśli element nie został znaleziony). Jeśli w liście znajduje się wiele elementów o takim samym kluczu, powinien zostać wypisany najmniejszy spośród indeksów pod którymi leżą te elementy. Wypisywane wartości powinny być rozdzielone znakami nowej linii (std::endl lub \n).

**Example/Przykład**<br>

Input<br>
i 5<br>
i 1<br>
i 2<br>
i 3<br>
i 4<br>
s 5<br>
d<br>
s 5<br>
s 3<br>
q<br>
Output<br>
0<br>
-1<br>
2<br>
