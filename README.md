# papildoma užduotis. Asociatyvių konteinerių naudojimas

## Įiegimo ir naudojimosi instrukcijos

• *Norinti gauti programą pirmiausia reikia parsisiųsti ją  iš [Releases](https://github.com/gabijabalionyt/papildoma/releases) *

• *Parsisiųsti ir įsidiegti C++ kompiliatorių (pvz. GCC)*

• *Atsidaryti terminalą ir jame įvesti programos vietą diske*

• *Sukompiliuoti programą (`g++ main.cpp -o main`)*

• *Paleisti programą*

  *Jei naudojate unix įrašykite komandą ./main*
  *Jei naudojate win, įrašykite main:*

• *Programos naudojimasis bus paprastas, nes visi nurodymai bus parodomi ekrane.*

• *Programos rezultatai bus išspausdinami ekrane ir įrašomi į failą Rezultatai.txt*


## Programos kodas

Programa suskaičiuoja kiek skirtingų žodžių yra tekste, parodo, kuriose eilutėse jie kartojasi bei atranda ULR adresus, jeigu to prašoma.
Taip pat suteikia vartotojui galimybė rinktis ne iš vieno duomenų failo bei spausdinti tik tuos žodžius, kurie kartojasi ne mažiau kaip n kartų. 

```
Zodis |1 	| buvo pakartotas 42 kartus(-u) eilutese:1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 
Zodis |balionyte 	| buvo pakartotas 42 kartus(-u) eilutese:1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 
Zodis |gabija 	| buvo pakartotas 42 kartus(-u) eilutese:1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 
Zodis |gabijabalionyt 	| buvo pakartotas 42 kartus(-u) eilutese:1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 
Zodis |isi 	| buvo pakartotas 42 kartus(-u) eilutese:1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 
Zodis |master 	| buvo pakartotas 42 kartus(-u) eilutese:1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 
Zodis |new 	| buvo pakartotas 42 kartus(-u) eilutese:1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 
Zodis |papildoma 	| buvo pakartotas 84 kartus(-u) eilutese:1 1 2 2 3 3 4 4 5 5 6 6 7 7 8 8 9 9 10 10 11 11 12 12 13 13 14 14 15 15 16 16 17 17 18 18 19 19 20 20 21 21 22 22 23 23 24 24 25 25 26 26 27 27 28 28 29 29 30 30 31 31 32 32 33 33 34 34 35 35 36 36 37 37 38 38 39 39 40 40 41 41 42 42 
Zodis |readme 	| buvo pakartotas 42 kartus(-u) eilutese:1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 
Zodis |studente 	| buvo pakartotas 42 kartus(-u) eilutese:1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 
Zodis |uzduotis 	| buvo pakartotas 42 kartus(-u) eilutese:1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 
=======================================================
		URLS:
=======================================================
https://github.com
https://github.com
https://github.com
https://github.com
https://github.com
https://github.com
https://github.com
https://github.com
https://github.com
https://github.com
https://github.com
https://github.com
https://github.com
https://github.com
https://github.com
https://github.com
https://github.com
https://github.com
https://github.com
https://github.com
https://github.com
https://github.com
https://github.com
https://github.com
https://github.com
https://github.com
https://github.com
https://github.com
https://github.com
https://github.com
https://github.com
https://github.com
https://github.com
https://github.com
https://github.com
https://github.com
https://github.com
https://github.com
https://github.com
https://github.com
https://github.com
https://github.com
=======================================================


```
