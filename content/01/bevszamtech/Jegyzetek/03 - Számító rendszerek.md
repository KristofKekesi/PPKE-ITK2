---
Óra neve: Bevezetés a számítástechnikába
Előadó: Naszlady Márton Bese
Dátum: 
tags:
  - elmélet
---
# Tizedes számok
- Radix pont: A tizedesvessző helyzete
$$a^1\cdot x_1 + a^0\cdot x_2+a^{-1}\cdot x_{-1}+a^{-2}\cdot x_{-2}$$
> [!example] Példa
> Pl: $10,5$ vagy $10,01_{[2]}$
# Tört szám binárisban reprezentálva
Két opciót használunk erre:
### Fixpontos ábrázolás
Ilyenkor megadjuk az adat mekkora része (hány bit) az egészrész és mekkora (hány bit) a törtrész
### Lebegőpontos ábrázolás
### Leírás:
- Mantisza
- Karakterisztika
### Lépések
1. lépés: Normálalakra váltjuk a számokat.
2. lépés: A leírás szerint összerakjuk a lebegőpontos ábrázolást.
Ilyenkor a bináris átírásból tudnunk kell a szám:
- előjelét
- a normálalak egészrészét
- a normálalak törtrészét
- hányadikon van a a számrendszer alapja (Például: $4\cdot10^{2}$)
## Binárisra átváltva
1. lépés:
	Átváltjuk a számot binárisra
2. lépés:
	Normálalakra váltjuk a számot
3. lépés:
	Behejettesítjük a 
- 11101,101 - Normálalakra váltjuk
- 1,1101101 x 2^4
- Előjel: pozitív (0)
- egészrész: 1 - ==Igazábol nincs erre szükség mert definícióból következik hogy nem lehet más mint 1==
- törtrész: 11011010
- kitevő: 4 => 10\[2]
Képlet: ELŐJEL 1,MANTISZA x 2 \^KARAKTERISZTIKA
	__Pl:__
	0.25 => 0.01\[2]
	Kódolás:
	Előjel: bit: 0 +; 1 -
	Mantisza: 10bit
	Karakterisztika: 5 bit Excess - 14
	0.25 => 0.01\[2] => 1.01 x 2^-2
	0 01100 0000000000

# ALU - Arithmetic Logic Unit
"upside down gatya"
```
A        B
 ____    ____
\    \  /   /
 \    \/   / <-- utasítás OPERATION CODE
  \       /  --> jelzések FLAG
   \_____/
    Output
```
- ALU belső hibák
	- túlcsordulás
	- alulcsordulás
- utasítás OPERATION (OP.) CODE: A bemenetekkel mit kell csinálni
- jelzések FLAG: Szól ha valami butaságot csinálnánk

# RAM - Memória
```
 DATA IN          _______         DATA OUT
O----------------|       |----------------O
 WRITE ENABLE    |   O   |
O----------------|_______|
```
- Ezeknek a tömbjeiből áll a memória, ezek a részek x, y, és z irányban is sokszorozva van
```
============             CÍM
| 1 | 0000 |----------------O
| 2 | 0000 |            ADAT
| 3 | 0000 |----------------O
| 4 | 0000 |           WRITE
| 5 | 0000 |----------------O
| 6 | 0000 |            READ
| 7 | 0000 |----------------O
============
```