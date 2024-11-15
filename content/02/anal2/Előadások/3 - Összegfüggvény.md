---
Óra neve: Matematikai analízis 2.
Előadó: Dr. Vágó Zsuzsanna Márta
Dátum: 2022-03-11
---
## Összegfüggvény [^osszegfuggveny]
$f:\mathcal{H}\to\mathbb{R}$ összegfüggvény, ahol
$$f(x)=\sum_{n=0}^\infty c_nx^n\quad x\in\mathcal{H}$$
**tulajdonságai**:
- $\mathcal{H}$ belsejében folytonos (nem triviális a végtelen összeg miatt).
- $\mathcal{H}$ belsejében (akárhányszor) differenciálható (nem triviális).
$$f'(x)=\sum_{n=1}^\infty c_n\cdot nx^{n-1}\quad\text{(Az összeget tagonként deriváljuk)}$$
$$f^{(k)}(x)=\sum_{n=k}^\infty c_n\cdot (nk+1)x^{n-k}$$
- $[\alpha, \beta]\subset\text{int}(\mathcal{H})$ $\Rightarrow$ $f$ Riemann-integrálható
$$\int_\alpha^\beta f(x)dx=\bigg[c_n\frac{x^{n+1}}{n+1}\bigg]_\alpha^\beta$$
## Hatványsor és Taylor sor kapcsolata [^hatvany-taylor]
Tegyük fel $f(x)$ egy környezetében (összegfüggvény)
$$f(x)=\sum_{n=0}^\infty c_nx^n$$ valamilyen $(c_n)$ sorozatra. Ekkor:
1. Ez egyértelmű reprezentáció
2. Ha (1) $\Rightarrow$ $c_n=\frac{f^{(n)}(0)}{n!}$
	Ekkor az együtthatók:
	$$c_n=\frac{f^{(n)}(0)}{n!}.$$
3. Ha $f(x)=\sum_{n=0}^\infty c_n(x-x_0)^n\quad x_0$ egy környezetében (hatványsor).
	Ekkor az együtthatók:
	$$c_n=\frac{f^{(n)}(x_0)}{n!}.$$
## Analitikus függvény
$f$ analitikus függvény $x_0$-ban ha $\exists$ környezete $x_0$-ban, amire
$$f(x)=\sum_{n=0}^\infty c_n(x-x_0)^n.$$
**Más szóval**:
$f$ függvény analitikus egy $x_0$ pontban, ha annak a környezetében van hatványsora.
## Zárt alak
#todo 
## Trigonometrikus polinom [^trig-polinom]
Szinuszokból és koszinuszokból képzünk polinomokat.
$$\sin(nx)\quad\cos(mx)\quad n,m\in\mathbb{N}$$
$$f(x)=\frac{a_0}{2}+\sum_{k=1}^n\bigg(a_k\cos(kx)+b_k\sin(kx)\bigg)\quad\quad x\in\mathbb{R}$$
## Trigonometrikus sor [^trig-sor]
Adottak az $a_0,a_1,a_2,…,b_0,b_1,b_2,…\in\mathbb{R}$ együtthatók.
$$f(x)=\frac{a_0}{2}+\sum_{k=1}^\infty\bigg(a_k\cos(kx)+b_k\sin(kx)\bigg)\quad\quad x\in\mathbb{R}$$
> [!info] Könnyebb megjegyzés
> A trigonometrikus polinom képlete ugyan az mint a trigonometrikus soré, csak a szumma a végtelenbe tart.
## Trigonometrikus függvény rendszer [^trig-fv-rendszer]
$$\Phi_0(x)=1$$$$\Phi_1(x)=sin(x)\quad\phi_2(x)=cos(x)$$
$$\Phi_{2k-1}(x)=sin(kx)\quad\phi_{2k}(x)=cos(kx)$$
#### Lemma (ortogonalitás)
$$\int_{-\pi}^{\pi}\Phi_n(x)\Phi_m(x)dx=$$
$$\{0, \text{ha } n≠m;\quad 2\pi\text{ ha } n=m=0;\quad\pi\text{ ha } n=m≠0\}$$
> [!statement] Állítás
> $$f(x)=\frac{a_0}{2}+\sum_{k=1}^n\bigg(a_k\cos(kx)+b_k\sin(kx)\bigg)$$
> Ekkor:
> $$a_k=\frac{1}{\pi}\int_{-\pi}^\pi f(x)\cos(kx)dx\quad k=0,1,…,n$$
> $$b_k=\frac{1}{\pi}\int_{-\pi}^\pi f(x)\sin(kx)dx\quad k=1,2,…,n$$
## Fourier sor [^fourier-sor]
Tegyük fel, hogy $f$ egy trigonometrikus polinom.
$$f\sim\frac{a_0}{2}+\sum_{k=1}^\infty\bigg(a_k\cos(kx)+b_k\sin(kx)\bigg),$$
ahol $a_k$ és $b_k$ Fourier együtthatók.
**Ekkor**:
$$a_k=\frac{1}{\pi}\int_{-\pi}^\pi f(x)\cos(kx)dx,\quad\quad k=0,1,2,…,N$$
$$b_k=\frac{1}{\pi}\int_{-\pi}^\pi f(x)\sin(kx)dc,\quad\quad k=1,2,3,…,N$$
#### Speciális esetek
- Ha $f$ függvény páros
$$b_k=0\quad\quad\forall k\in\mathbb{N}$$
- Ha $f$ függvény páratlan,
$$a_k=0\quad\quad\forall k\in\mathbb{N}$$

[^osszegfuggveny]: [[Analízis 2. (2024).pdf#page=7|Analízis 2. Jegyzet: 6. oldal]]
[^hatvany-taylor]: [[Analízis 2. (2024).pdf#page=13|Analízis 2. Jegyzet: 12. oldal]]
[^trig-sor]: [[Analízis 2. (2024).pdf#page=15|Analízis 2. Jegyzet: 14. oldal]]
[^trig-polinom]: [[Analízis 2. (2024).pdf#page=15|Analízis 2. Jegyzet: 14. oldal]]
[^trig-fv-rendszer]: [[Analízis 2. (2024).pdf#page=16|Analízis 2. Jegyzet: 15. oldal]]
[^fourier-sor]: [[Analízis 2. (2024).pdf#page=17|Analízis 2. Jegyzet: 16. oldal]]