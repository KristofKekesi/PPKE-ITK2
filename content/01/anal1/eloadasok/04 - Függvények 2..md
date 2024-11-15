---
Óra neve: Matematikai analízis 1.
Előadó: Dr. Vágó Zsuzsanna Márta
Dátum: 2023 Okt. 26.
tags:
  - elmélet
---
## Folytonosság [^1]
Egy adott $f$ függvény ($f: D \to\mathbb{R}$) folytonos, ha minden tetszőleges $x_0$ pontra teljesül, hogy
$$\forall x \in D, \quad |x-x_0| < \delta \quad\Rightarrow\quad |f(x)-f(x_0)| < \varepsilon.$$
> [!info] Magyarázásképp:
> Ha a függvény folytonos, minden egymáshoz közeli $x$ értékhez egymáshoz közeli $y$ érték kell hogy tartozzon.
## Sorozatfolytonosság [^2]
Az $f$ függvény [[03 - Számsorozatok 2. és Függvények 1.#Értelmezési tartomány [ 4]|értelmezési tartomány]]ának ($D_f$) egy $x_0$ pontjában sorozatfojtonos, ha $\forall(x_n)\subset D_f$ sorozatra, melyre
$$\lim_{n\to\infty}{x_n}=x_0\text{,}\quad\text{teljesül, hogy}$$
$$\lim_{x\to\infty}{f(x_n)}=f(x_0).$$
- Ekvivalens a [[#Folytonosság [ 1]|folytonosság]]gal (bizonyítás az [[Analízis 1. (2023).pdf#page=78|Analízis 1. Jegyzet 72. oldalán]])
## Függvény határérték [^3]
Adott $f$ függvény és $x_0\in\mathbb{R}$. Tegyük fel, hogy van olyan $U=(x_0-r, x_0+r)$ környezet, melyre $x_0$ kivételével minden eleme benne van az $f$ függvény értékkészletében. Másszóval:
$$x_0\in\mathbb{R}\quad\quad\exists U=(x_0-r,x_0+r)\quad\quad\forall x\in U\backslash\{x_0\}\quad\quad x\in D_f.$$
Az $f$ függvény határértéke $A$, ha minden $\varepsilon$ nagyobb nullánál, és minden $\varepsilon$-hoz létezik $\delta$, ami nagyobb mint nulla, melyekre
$$0<|x-x_0|<\delta,\quad\quad x\in D\Rightarrow|f(x)-A|<\varepsilon$$
$$\lim_{x\to x_0}{f(x)} = A$$
### Baloldali határérték
$f$ baloldali határértéke $x_0$-ban $a\in\mathbb{R}$, ha minden $\varepsilon>0$-hoz létezik $\delta>0$, melyre
$$x\in D_f\quad\quad x_0-\delta<x<x_0\Rightarrow |f(x)-a|<\varepsilon.$$
Jelölés:
$$\lim_{x\to x_0^-}{f(x)}=a$$
### Jobboldali határérték
$$x\in D_f\quad\quad x_0<x<x_0-\delta\Rightarrow |f(x)-a|<\varepsilon.$$Jelölés:
$$\lim_{x\to x_0^+}{f(x)}=a$$
### Határérték tulajdonságok [^4]
Tegyük fel, hogy $\lim_{x\to x_0}f(x)=\alpha$, $\lim_{x\to x_0}g(x)=\beta$. Ekkor
1. $\lim_{x\to x_0}cf(x)=c\alpha\quad c\in\mathbb{R}$
2. $\lim_{x\to x_0}(f(x)+g(x))=\alpha+\beta$
3. $\lim_{x\to x_0}(f(x)g(x))=\alpha\beta$

Tegyük fel, hogy $\lim_{x\to x_0}g(x)=\alpha$, $\lim_{x\to\alpha}f(x)=\beta$. Ekkor
$$\lim_{x\to x_0}f(g(x))=\beta$$
## Nevezetes függvény határértékek
$$\lim_{x\to\infty}x^{\frac{1}{x}}=1$$
$$\lim_{x\to\infty}\bigg(1+\frac{a}{1}\bigg)=e^a$$
$$\lim_{x\to0}(1+x)^x=e$$
$$\lim_{x\to\infty}x\sin\frac{1}{x}=1$$

[^1]: [[Analízis 1. (2023).pdf#page=76|Analízis 1. Jegyzet 70. oldal]]
[^2]: [[Analízis 1. (2023).pdf#page=78|Analízis 1. Jegyzet 72. oldal]]
[^3]: [[Analízis 1. (2023).pdf#page=80|Analízis 1. Jegyzet 74. oldal]]
[^4]: [[Analízis 1. (2023).pdf#page=85|Analízis 1. Jegyzet 79. oldal]]