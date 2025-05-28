**Position in sequence (Pozycja w ciągu liczb)**<br>
Write and use a function (iterative or recursive, the teacher will decide) which finds a given element in the monotonically increasing OR decreasing sequence of (signed) integers. The function should return the index of the found element, or −1 if it doesn’t exist in the sequence.
(Indices in the sequence should be counted starting from 0) <br>

Napisz i wykorzystaj funkcję (iteracyjną lub rekurencyjną, w zależności od decyzji prowadzącego) która szuka podanego elementu w monotonicznie rosnącym LUB malejącym ciągu liczb całkowitych (ze znakiem). Funkcja powinna zwrócić indeks, pod którym leży poszukiwany element w ciągu, lub -1, jeśli element nie został odnaleziony.<br>
(Indeksy są liczone zaczynając od 0)<br>

**Input**<br>
First line: m - number of test scenarios.<br>
Next, for each test scenario, in consecutive lines:<br>
n - number of elements in the sequence<br>
the sequence itself (n numbers separated by spaces)<br>
p - number of elements to be found<br>
k0, ..., kp-1 - p elements to be found in the sequence.<br>

Pierwsza linia: m - liczba scenariuszy testowych.<br>
Następnie, dla każdego scenariusza, w kolejnych liniach:<br>
n - liczba elementów w ciągu<br>
sam ciąg (n liczb rozdzielonych znakami spacji)<br>
p - liczba elementów do wyszukania<br>
k0, ..., kp-1 - p elementów do wyszukania w ciągu.<br>

**Output**<br>
One line for each of p elements to be found for each of n test scenarios:<br>
the index of the given element ki in the sequence, or -1 if ki was not found in the sequence.<br>
Jedna linia dla każdego z p elementów do wyszukania dla każdego z n scenariuszy testowych:<br>
indeks podanego elementu ki w ciągu, lub -1 jeśli element ki nie został odnaleziony.<br>

**Example/Przykład**<br>
Input
3<br>
5<br>
5 4 3 2 1<br>
1<br>
5<br>
10<br>
1 2 4 8 16 32 64 128 256 512<br>
2<br>
128<br>
129<br>
5<br>
-100 -50 -1 0 10000<br>
1<br>
-1<br>

Output<br>
0<br>
7<br>
-1<br>
2<br>
