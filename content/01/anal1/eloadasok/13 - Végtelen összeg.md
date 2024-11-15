---
Óra neve: Matematikai analízis 1.
Előadó: Dr. Vágó Zsuzsanna Márta
Dátum: 
tags:
  - elmélet
---
## Számsor (Sor) [^1]
Számsor alatt adott $(a_n)\in\mathbb{R}$ számsorozat összegét értjük a végtelenben.
$$\bigg(\sum{a_n}\bigg)$$
> [!warning] Fontos
> A számsor nem azonos a számsorozattal!
#### Konvergens [^2]
1. Az $(\sum_{n=0}^\infty a_n)$ sor konvergens, ha a rész-sorozatai ($s_n=\sum_{k=1}^n a_k$) konvergensek.
2. Ha $\exists\lim_{n\to\infty}{s_n}=s$. Ekkor a sor összege:
$$\sum_{n=1}^\infty{a_n}=s$$
#### Divergens [^3]
Nincs megoldása.
## Számsor $n$-dik részletösszege
$$s_n=\sum_{k=1}^n{a_k}$$
## Mértani sor [^2]
A $\sum_{n=1}^\infty{q^{n-1}}$ [[#Számsor (Sor) [ 1|számsor]] elnevezése mértani sor.
$$q\in\mathbb{R}\backslash\{0\}\quad\quad n\in\mathbb{N}$$
$$\sum_{n=1}^\infty{q^{n-1}}$$
> [!example]- Mértani sor, $q≠1$
> $$s_n=1+q+q^2+…+q^{n-1}=\frac{1-q^n}{1-q}$$
> **Ezért**:
> $$\lim_{n\to\infty}{s_n}=\frac{1}{1-q}\quad\text{ha}\quad|q|<1$$
> $$\lim_{n\to\infty}{s_n}=\infty\quad\text{ha}\quad q\geq1$$
> $$\lim_{n\to\infty}{s_n}=\beta\quad\text{ha}\quad q\leq-1$$
> **Ezért**:
> A mértani sor, ha $q≠1$ divergens.

> [!example]- Mértani sor, $q=1$
> $$s_n=1_1+1_2+…+1_n=n$$
> **Ezért**:
> $$\lim_{n\to\infty}{s_n}=n$$
> **Ezért**:
> A mértani sor, ha $q=1$ konvergens.
## Nullsorozat [^4]
- Ha $(\sum a_n)$ [[#Konvergens [ 2|konvergens]], akkor $(a_n)$ nullsorozat.
- $(a_n)$ nullsorozat, ha határértéke $0$.
## Divergencia teszt [^5]
Ha $(a_n)$ nem [[#Nullsorozat [ 4|nullsorozat]], akkor$(\sum a_n)$ [[#Divergens [ 3|divergens]].

> [!info]
> Az állítás megfordítása nem igaz.
> Ha $(a_n)$ [[#Nullsorozat [ 4|nullsorozat]], akkor $\sum a_n$ lehet [[#Divergens [ 3|divergens]] is.
## Cauchy feltétel
Az $(a_n)$ sorozat eleget tesz a Cauchy feltételnek, ha $\forall\varepsilon>0$-hoz van olyan $N$ küszöbindex, $N=N(\varepsilon)$, melyre teljesül, hogy:
$$|a_n-a_m|<\epsilon\quad\quad\forall n,m\geq N.$$
## Cauchy sorozat [^6]
Az $(a_n)$ sorozat Cauchy sorozat, ha eleget tesz a [[#Cauchy feltétel|Cauchy feltételnek]].
![[cauchy-sorozat.png]]
## Cauchy sorozat kapcsolata a [[#Konvergens [ 2|konvergenciával]][^6]
> [!thessis] Tétel
> Egy $(a_n)$ sorozat pontosan akkor konvergens, ha Cauchy sorozat.

> [!proof] Bizonyítás
> Az egyik irányt igazoljuk. Tegyük fel, hogy $(a_n)$ konvergens:
> $$\lim_{n\to\infty}a_n=A.$$
> Minden $\varepsilon>0$ mellett az $\varepsilon/2$ számhoz $\exists N$ küszöbindex, melyre $\forall n,m\geq N$ esetén
> $$|a_n-A|<\frac{\varepsilon}{2}.$$
> Ekkor a [[02 - Számsorozatok 1.#Háromszög egyenlőtlenség|háromszög egyenlőtlenség]] miatt
> $$|a_n-a_m|=|(a_n-A)+(A-a_m)|\leq|a_n-A|+|a_m-A|\leq\frac{\varepsilon}{2}+\frac{\varepsilon}{2}=\varepsilon$$

> [!example] Példa
> $$a_n=\sum^n_{k=1}\frac{1}{k}$$
> Becsüljük meg az $n$-edik és a $2n$-edik tag különbségét.
> $$a_{2n}-a_n=\sum_{k=n+1}^{2n}\frac{1}{k}=\frac{1}{n+1}+\frac{1}{n+2}+…+\frac{1}{2n}>\frac{1}{2n}+\frac{1}{2n}+…+\frac{1}{2n}=n\frac{1}{2n}=\frac{1}{2}.$$
> Tehát
> $$a_{2n}-a_n>\frac{1}{2}\quad\quad\forall n.$$
> Ezért $\varepsilon=\frac{1}{2}$ esetén nem teljesül a Cauchy kritérium $\Rightarrow$ $(a_n)$ nem konvergens.
## Összehasonlító kritérium [^7]
### Majoráns kritérium
Tegyük fel, hogy $(a_n)$ [[#Nullsorozat [ 4|nullsorozat]], és $(b_a)$ olyan sorozat, melyre $|b_n|\leq|a_n|\quad\forall n\in\mathbb{N}$.
$$\lim_{n\to\infty}{b_n}=0$$
### Minoráns kritérium
Tegyük fel, hogy $(a_n)$ $\infty$-be divergál, vagyis $\lim_{n\to\infty}{b_n}=\infty$. Tegyük fel azt is, hogy van olyan $n$ index, melyre $b_n\geq a_n\quad n\geq\mathbb{N}$.
$$\lim_{n\to\infty}{b_n}=\infty$$
## Abszolút konvergens sorok [^8]
$\big(\sum{a_n}\big)$ abszolút konvergens, ha:
$$\sum_{n=1}^\infty|a_n|<\infty.$$
## Feltételesen konvergens sorok [^8]
$\big(\sum{a_n}\big)$ végtelen sor feltételesen konvergens, ha [[#Konvergens [ 2|konvergens]], de nem [[#Abszolút konvergens sorok [ 8|abszolút konvergens]].
## Hányadoskritérium [^9]
Tegyük fel, hogy $0<q<1$.
$$\bigg|\frac{a_{n+1}}{a_n}\bigg|\leq q < 1\quad\quad\forall n\in\mathbb{N}$$
Ekkor a sor [[#Abszolút konvergens sorok [ 8|abszolút konvergens]].
$$\bigg|\frac{a_{n+1}}{a_n}\bigg|\geq 1\quad\quad\forall n\in\mathbb{N}$$
Ekkor a sor [[#Divergens [ 3|divergens]].
## Gyökkritérium [^10]

[^1]: [[Analízis 1. (2023).pdf#page=52|Analízis 1. Jegyzet 46. oldal]]
[^2]: [[Analízis 1. (2023).pdf#page=53|Analízis 1. Jegyzet 47. oldal]]
[^3]: [[Analízis 1. (2023).pdf#page=54|Analízis 1. Jegyzet 48. oldal]]
[^4]: [[Analízis 1. (2023).pdf#page=41|Analízis 1. Jegyzet 35. oldal]]
[^5]: [[Analízis 1. (2023).pdf#page=55|Analízis 1. Jegyzet 49. oldal]]
[^6]: [[Analízis 1. (2023).pdf#page=43|Analízis 1. Jegyzet 37. oldal]]
[^7]: [[Analízis 1. (2023).pdf#page=43|Analízis 1. Jegyzet 37. oldal]]
[^8]: [[Analízis 1. (2023).pdf#page=39|Analízis 1. Jegyzet 53. oldal]]
[^9]: [[Analízis 1. (2023).pdf#page=60|Analízis 1. Jegyzet 54. oldal]]
[^10]: [[Analízis 1. (2023).pdf#page=63|Analízis 1. Jegyzet 57. oldal]]