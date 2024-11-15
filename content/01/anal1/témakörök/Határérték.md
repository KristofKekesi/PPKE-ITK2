---
tags:
  - elmélet
---
## Alap koncepciók
### Határozott határérték
### Határozatlan / Kritikus határérték
Olyan esetek, amikor nem tudjuk eldönteni a határértéket. Például: $1^\infty$, $\infty-\infty$, $\frac{0}{0}$, $\frac{\infty}{\infty}$,  $0\cdot\infty$, …
Ilyenkor a határozatlan határértéket tovább kell vizsgálni, ezekre az alábbi módszereket használjuk:
#### Legnagyobb $n$-es tag kiemelése
Tört esetén a számlálóban és a nevezőben is kiemeljük a legnagyobb $n$-es tagot, majd ezekkel leegyszerűsítve megkapjuk a határértéket.
### Gyöktelenítés
### Visszavezetés $e$-re
> [!info] Euler-féle szám
> $$e=\lim_{n\to\infty}{\bigg(1+\frac{1}{n}\bigg)^n}$$
###### Példák:
> [!example]- $a_n=\big(1+\frac{3}{n}\big)^n$
> $$\lim_{n\to\infty}(a_n)=\lim_{n\to\infty}\bigg(1+\frac{3}{n}\bigg)^n=\lim_{n\to\infty}\bigg(1+\frac{3}{n}\bigg)^{\frac{n}{3}\cdot\frac{3}{n}\cdot n}=e^{\lim_{n\to\infty}\frac{3}{n}\cdot n}=e^3$$
### L'Hôpital szabály
**Kiejtés**: "Lopitál"
A $\frac{\infty}{\infty}$ és $\frac{0}{0}$ alakú határozatlan határértékekből képezhetünk vele határozott határértéket.
$$\lim_{x\to a}{\frac{f(x)}{g(x)}}=\lim_{x\to a}{\frac{f'(x)}{g'(x)}}$$
> [!info] 
> Megeshet, hogy többször is alkalmaznunk kell a szabályt, hogy határozott határértéket kapjunk.

> [!warning] Fontos
> Ez a szabály csak $\frac{\infty}{\infty}$ és $\frac{0}{0}$ alakú határozatlan határértékeknél alkalmazható!
> 

![[05 - Függvények 3.#Nevezetes határértékek [ 4]]
## Küszöbindex számítás
Egy $a_n$ sorozatnál a küszöbindex számítással határozzuk meg az első $n$ számot, ami után minden eleme a sorozatnak a megadott $\varepsilon$ határon belül van az $A$ határértékhez, feltéve hogy a sorozat konvergens.
1. lépés: Határérték kiszámolása
2. lépés: Abbahagyjuk, ha divergens
3. lépés: $|a_n-A|<\varepsilon$ egyenlőtlenség megoldása $n$-re
> [!error] Típushiba
> Az $|a_n-A|<\varepsilon$ egyenlőtlenség megoldása nem megoldás. A küszöbindex az első olyan $n$-edik elem amin a definícióban említett tulajdonság érvényesül, ezért:
> - csak fölfelé kerekítünk
> - $n\in\mathbb{N}$
## Határértékes feladatok
## Ismétlés
> [!question]- Mi $\frac{1}{x^n}$ határértéke $x\to\infty$-ben?
> $$\lim_{x\to\infty}{\frac{1}{x_n}}=0^+\quad\quad n\in\mathbb{N}$$

> [!question]- Mi $\frac{1}{x^n}$ határértéke $x\to-\infty$-ben?
> $$\lim_{x\to\infty}{\frac{1}{x_n}}=0^-\quad\quad n\in\mathbb{N}$$

> [!question]- Mi az Euler-féle szám?
> $$e=\lim{\bigg(1-\frac{1}{n}\bigg)^n}$$

> [!question]- L'Hopital szabály pár szóban.
> Határozatlan határértékből határozottat képzünk, ha az $\frac{0}{0}$, vagy $\frac{\infty}{\infty}$ alakú.
> $$\lim_{x\to a}{f(x)}=\lim_{x\to a}{f'(x)}$$
