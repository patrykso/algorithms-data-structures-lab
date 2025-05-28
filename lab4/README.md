**Heap Q**

Implement a min heap for the following data:<br>
date in the following format: dd-mm-yyyy<br>
name one word

The heap should act as a priority queue for the instances of the given structure. Initially, all instances should be stored in the heap with regard to the alphabetical order of names (i.e. the instance with the first name in alphabetical order should be on top). Your program should support the following operations:

    + n v1 ...vn - add n individuals (format: <date> <name>) to the priority queue (heap). Initially, the first name in alphabetical order is on the top;
    - m - remove m elements from the top of the heap and print their data on the screen (format: <date> <name> e.g. 19-04-2022 Alan);
    p - print all elements of the heap in the order in which they are stored in an array;
    r - rearrange the order of the queue such that the earliest date is on top. Repeats of this operation alternate between the two orders;
    q - exit the program (and deallocate memory).

**Additional remarks**: If both children are equal the child of the lesser index is swapped. It is sufficient to implement operations '+' and 'p' to pass tests 1 and 2. The next two tests include also operation '-'. The remaining tests use all operations. Test 0 is given below. <br>

**Input**<br>
A sequence of instructions in the format presented above. The last instruction is q.<br>

**Output**<br>
Result of instructions '-' and 'p'.

Zaimplementuj min kopiec dla następujących struktur danych:<br>
data w formacie: dd-mm-rrrr<br>
imię jeden wyraz<br>

Kopiec powinien działać jako kolejka priorytetowa dla instancji podanej struktury. Początkowo wszystkie instancje struktur powinny być przechowywane z zachowaniem alfabetycznej kolejności imion (tzn. instancja z pierwszym alfabetycznie imieniem powinna być pierwszym elementem (korzeniem) kopca). Twój program powinien umożliwiać wykonywanie następujących operacji:

    + n v1 ...vn - dodaj n osób (format: <data> <imię>) do kolejki priorytetowej (kopca). Początkowo, osoba z pierwszym alfabetycznie imieniem powinna być pierwszym elementem (korzeniem) kopca;
    - m - usuń m elementów minimalnych (z wierzchu kopca) i wypisz ich dane na ekranie (format: <data> <imię> np. 19-04-2022 Alan);
    p - wypisz na ekran wszystkie elementy kopca w kolejności, w jakiej są przechowywane w tablicy;
    r - zmień kolejność przechowywania elementów w kolejce priorytetowej na taką, w której element z najwcześniejszą datą jest przechowywany jako pierwszy element (korzeń kopca). Powtórzenia tej operacji powodują zmianę kolejności pomiędzy dwoma wspomnianymi wariantami (imiona alfabetycznie lub daty od najwcześniejszej);
    q - wyjdź z programu (i zwolnij pamięć).

**Dodatkowe uwagi**:<br>
Jeśli obaj potomkowie elementu mają taką samą wartość, potomek z mniejszym indeksem jest zamieniany z rodzicem. Do zdania testów 1 i 2 wystarczy zaimplementować operacje '+' i 'p'. Kolejne dwa testy zawierają dodatkowo operację '-'. Pozostałe testy zawierają wszystkie operacje. Test 0 jest dany poniżej.

**Wejście**<br>
A sequence of instructions in the format presented above. The last instruction is q.<br>
Ciąg instrukcji w formacie opisanym powyżej. Ostatnią instrukcją jest q.<br>

**Wyjście**<br>
Result of instructions '-' and 'p'.<br>
Wynik działania instrukcji 'i' i 'p'.<br>

**Example**<br>

Input<br>
\+ 6<br>
19-10-1945 Harris <br>  
07-03-1988 Glenn<br>
22-04-1946 John <br>  
17-03-1972 Samuel <br>  
11-04-1997 Pink<br>
14-04-1926 Liz <br>
\- 2 <br>
p<br>
r<br>
+2<br>
04-10-1974 Dawn<br>
27-05-1977 Divine <br>
p<br>
\- 3<br>
r<br>
\- 3 <br>
q <br>

Output<br>
07-03-1988 Glenn<br>
19-10-1945 Harris<br>

22-04-1946 John<br>
14-04-1926 Liz<br>
11-04-1997 Pink<br>
17-03-1972 Samuel<br>

14-04-1926 Liz<br>
22-04-1946 John<br>
27-05-1977 Divine<br>
17-03-1972 Samuel<br>
04-10-1974 Dawn<br>
11-04-1997 Pink<br>

14-04-1926 Liz<br>
22-04-1946 John<br>
17-03-1972 Samuel<br>

04-10-1974 Dawn<br>
27-05-1977 Divine<br>
11-04-1997 Pink<br>
