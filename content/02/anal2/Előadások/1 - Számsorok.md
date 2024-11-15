---
Óra neve: Matematikai analízis 2.
Előadó: Dr. Vágó Zsuzsanna Márta
Dátum: 2024-03-04
---
# Ismétlés
## Végtelen számsorozat megoldása
$$\sum_{n=1}^\infty a_n=a_1+a_2+…=\lim_{n\to\infty}S_n$$
$$S_n=\sum_a^1a_a$$
## ![[13 - Végtelen összeg#Konvergens [ 2|Konvergens]]
## ![[13 - Végtelen összeg#Divergencia teszt [ 5#|Divergencia teszt]]
# Új
## Abszolút konvergens [^abszolut-konvergens]
Egy $a_n$ végtelen számsorozat abszolút konvergens, ha
$$\sum_{n=1}^\infty|a_n|<\infty.$$
## Alternáló sor [^alternalo-sor]
$\big(\sum a_n\big)$ alternáló sor, váltakozó előjelű, ha
$$a_n\cdot a_{n+1}<0\quad\forall n\in\mathbb{N}.$$
> [!example] Például
> $$\sum_{n=1}^\infty(-1)^{n+1}\cdot\frac{1}{n}=1-\frac{1}{2}+\frac{1}{3}-\frac{1}{4}+…$$
> $$\sum_{n=1}^{\infty}(-1)^n\cdot\frac{n}{n+1}=-\frac{1}{2}+\frac{2}{3}-\frac{3}{4}+…$$
## Leibniz sor
$(a_n)$ Leibniz sor, ha
- [[#Alternáló sor [ alternalo-sor]|Alternáló sor]], vagyis $a_n\cdot a_{n+1}<0$,
- $(a_n)$ null sorozat,
- $(|a_n|)$ monoton csökkenő.
> [!thessis] Tétel
> Ha $\big(\sum a_n\big)$ Leibniz sor, akkor konvergens.
> 
> **Bizonyítás**:
> Tegyük fel, $a_1>0\Rightarrow a_2>0, a_3>0$
> $$\sum_{n=1}^\infty a_n=\sum_{n=1}^\infty(-1)^{n+1}\quad b_n>0$$ 
## Feltételesen konvergens [^feltetelesen-konvergens]
$(\sum a_n)$ feltételesen konvergens, ha
- $\sum_{n=1}^\infty a_n<\infty$
- $\sum_{n=1}^\infty|a_n|=\infty$.
**Másszóval**:
$(\sum_{n=1}^\infty)$ feltételesen konvergens, ha konvergens, de nem abszolút konvergens.
## Hibabecslés
Tegyük fel, $(\sum a_n)$ Leibniz sor. Ekkor
$$|s-s_n|<|a_{n+1}|.$$
> [!example] Példa
> $$\sum_{n=1}^\infty(-1)^{n-1}\cdot\frac{1}{n}=1-\frac{1}{2}+\frac{1}{3}-…$$
> Hány tag kell, hogy az összeg 2 tizedesjegyig jó legyen?
> $$|s-s_n|<10^{-2}$$

## Taylor polinom
### Elsőfokú / rendű Taylor polinom [^taylor-polinom]
$$F(x)\approx f(x_0)+f'(x_0)(x-x_0)$$
$T_1$ tulajdonságai elsőfokú polinomokra:
- $T_1(x_0)=f(x_0)$
- ${T_1}'(x_0)=f'(x_0)$
## n-ed fokú Taylor polinom [^n-foku-taylor-polinom]
$$T_n(x)=f(x_0)+f'(x)(x-x_0)+\frac{f''(x_0)}{2}(x-x_0)^2+…+\frac{f^{(n)}(x_0)}{n!}(x-x_0)^n$$
$$T_n(x)=\sum_{k=0}^n\frac{f^{(k)}(x_0)}{k!}(x-x_0)^k$$
Állítás
Ez a $T_n(x)$ teljesíti a feltételeket. Sőt, nincs más ezen kívül.
> [!example] Példa
> $$f(x)=e^x\quad x_0=0$$
> $$T_3(x)=?$$
## Lagrange-féle maradéktag 
$$L_n(x):=f(x)-T_n(x)$$
> [!thessis] Tétel
> Tegyük fel, hogy $f$ $(n+1)$-szer differenciálható. Ekkor $\forall x$-hez $\exists\xi$ ami $x$ és $x_0$ közötti.
> $$L_n(x)=\frac{f^{(n+1)}(\xi)}{(n+1)'}(x-x_0)^{n+1}$$
## Riemann tétel
Tegyük fel, hogy $(\sum a_n)$ feltételesen konvergens. Ekkor $\forall c\in\mathbb{R}$ számra **VAN** átalakítás, amire $\text{összeg}=c$.

[^abszolut-konvergens]: [[Analízis 1. (2023).pdf#page=59|Analízis 1. Jegyzet: 53. oldal]]
[^feltetelesen-konvergens]: [[Analízis 1. (2023).pdf#page=59|Analízis 1. Jegyzet: 53. oldal]]
[^taylor-polinom]: [[Analízis 1. (2023).pdf#page=188|Analízis 1. Jegyzet: 182. oldal]]
[^n-foku-taylor-polinom]: [[Analízis 1. (2023).pdf#page=189|Analízis 1. Jegyzet: 183. oldal]]
