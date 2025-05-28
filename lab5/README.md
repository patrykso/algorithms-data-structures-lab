**Hash table 1**<br>
Count the number of occurences of each word in the text given in the input. Store these numbers in a hash table: the word should be interpreted as a key (type string), and the number of occurences as a value (type int). Use the method of collision resolving suggested by the teacher.

You can use an array of fixed, constant size, but allocate it dynamically! The maximum number of elements in a test is 100000. Choose the appropriate size of the array (check lecture slides).

Zlicz liczbę wystąpień każdego słowa występującego w tekście zadanym na wejściu. Przechowuj te liczby w swoim programie w tablicy hashowanej: każde słowo powinno być kluczem (typ: string), a liczba wystąpień danego słowa wartością (typ: int). Zaimplementuj metodę rozwiązywania kolizji zaproponowaną przez prowadzącego.

Możesz użyć tablicy o stałym rozmiarze, ale mimo wszystko zaalokuj pamięć dynamicznie! Maksymalna liczba elementów w testach to 100000. Wybierz odpowiedni rozmiar tablicy (możesz skorzystać ze slajdów z wykładu).
Input
The text (any number of words with only lower case letters, separated by spaces or new line characters). The words starting with character '?' and '-', and the word "q" should be interpreted as commands:

    '?': print the number of occurences of the given word on the screen,
    '-': remove the information about the given word from your hash table (from this point you should start counting the occurences of this word from 0),
    'q': exit.

Tekst (dowolna liczba słów zapisanych małymi literami, rozdzielonych znakami spacji lub nowej linii). Słowa zaczynające się od znaków '?' lub '-' oraz słowo "q" powinny być interpretowane jako komendy:

    '?': wypisz liczbę wystąpień danego słowa,
    '-': usuń informację o danym słowie ze swojej tablicy hashowanej (od tego momentu zliczaj kolejne wystąpienia tego słowa od 0),
    'q': wyjście.

**Output**<br>
For every word starting with '?': print a line with the number of occurences (to this point) of this word in the text. <br>
Dla każdego słowa zaczynającego się od '?': wypisana linia z dotychczasową liczbą wystąpień tego słowa w tekście.

**Example**

Input<br>
never gonna give you up<br>
never gonna let you down<br>
?up<br>
?down<br>
?never<br>
-never<br>
?never<br>
never gonna run around and desert you<br>
?never<br>
?you<br>
q<br>

Output<br>
1<br>
1<br>
2<br>
0<br>
1<br>
3<br>
