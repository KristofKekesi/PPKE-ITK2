---
Óra neve: Matematikai analízis 2.
Előadó: Dr. Vágó Zsuzsanna Márta
Dátum: 2024-03-08
---
Tegyük fel, hogy $f(a,b)\to\mathbb{R}$  $x_0$ körül végtelen sokszor differenciálható Taylor sor
$$T(x)=\sum_{k=0}^\infty\frac{f^{(x)}(x_0)}{k!}(x-x_0)^k$$
> [!statement] Állítás
> $$\sin(x)=\sum_{k=0}^\infty(-1)^{k+1}\frac{x^2+1}{(2k+1)!}$$

$$f(x)=e^{-\frac{1}{x^2}}\quad x≠0$$
$$f(x)=0\quad x=0$$
> [!thessis] Tétel
> Tegyük fel, hogy $\exists K$, ami $|f^{(k)}(x)|\leq k\quad \forall k, \forall x\in(a,b)$.

## Hatványsor [^hatvanysor]
Legyen $(c_n)$ szám sorozat $(c_n)\subset\mathbb{R}$, és $x_0\in\mathbb{R}$. Ezekből hatványsort alkothatunk a következőképpen:
$$\sum_{n=0}^\infty c_n(x-x_0)^n$$
> [!example] Példa
> $x_0=0$
> $$c_0+c_1x+c_2x^2+…+c_nx^n$$
## Konvergencia tartomány / Konvergencia Halmaz [^konvergencia-tartomany]
- $\mathcal{H}$ halmaz jelentése: ahol $(c_n)$ konvergens.
$$\mathcal{H}=\bigg\{x;\sum_{k=0}^\infty c_nx^n<\infty\bigg\}$$
**Lehetséges esetei**:
- $\mathcal{H}=\{0\}$ (például $c_n=^n$)
- $\mathcal{H}=\mathbb{R}$ (például $c_n=\frac{1}{n}$\)
- $\mathcal{H}=[(-\rho,\rho)]$ ($0$ középpontú intervallum)
## Konvergencia sugár ($\rho$) [^konvergencia-sugar]
$\rho$ meghatározása.
$$\sum_{k=0}^\infty c_nx^n\approx\sum_{n=0}^\infty a_n$$

Tegyük fel, hogy létezik $\gamma=\lim_{n\to\infty}|\frac{c_{n+1}}{c_n}|$. Ha
- $\gamma|x|<1$, akkor $c_n$ konvengens
- $\gamma|x|>1$, akkor $c_n$ divergens

[^hatvanysor]: [[Analízis 2. (2024).pdf#page=7|Analízis 2. Jegyzet: 6. oldal]]
[^konvergencia-tartomany]: [[Analízis 2. (2024).pdf#page=7|Analízis 2. Jegyzet: 6. oldal]]
[^konvergencia-sugar]: [[Analízis 2. (2024).pdf#page=10|Analízis 2. Jegyzet: 9. oldal]]