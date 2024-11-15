---
Óra neve: Matematikai analízis 2.
Előadó: Dr. Vágó Zsuzsanna Márta
Dátum: 2024-03-18
---
## Fourier sor deriváltja
Tegyük fel, hogy $f$ $\pi$ periodikus, differenciálható. Ekkor
$$f\sim\sum_{k=1}^\infty\big(-a_kk\cdot\sin(kx)+b_kk\cdot\cos(kx)\big)$$
> [!proof] Bizonyítás
> $$f'\sim\frac{\alpha_0}{2}+\sum_{k=1}^\infty\big(\alpha_k\cos(kx)+\beta_k\sin(kx),$$
> ahol $\alpha_0=\frac{1}{\pi}\int_{-\pi}^\pi f'(x)dx$.

> [!info] Következmény
> Igaz a tétel akkor is, ha $f$ véges sok első fajú szakadással rendelkezik, véges sok helyen nem differenciálható.

## Fourier sorok alaptétele [^fs-alaptetel]
Tegyük fel, hogy $f$ $2\pi$ periódikus, és $[-\pi, \pi]$-ben,
1. szakaszosan folytonos
2. végesen sok elsőfajú szakadással rendelkezik
3. ha $x_0$-ban szakadás van, akkor a függvényérték:
$$f(x_0)=\frac{f(x_0+0)+f(x_0-0)}{2}$$
	Ekkor: $f(x)=\text{Fourier Sor}(x)\quad\quad\forall x$-re.
## Parseval egyenlőség (Együtthatók nagyságrendje) [^parseval]
A Fourier együtthatókra teljesül az alábbi egyenlőség:
$$\frac{a_0^2}{2}+\sum_{k=1}^\infty(a_k^2+b_k^2)=\frac{1}{\pi}\int_{-\pi}^\pi f^2(x)dx.$$
## Számsík
Két valós szám által alkotott számsík.
$$\mathbb{R}^2$$
## Számhármasok
Három valós szám által alkotott számhármas.
$$\mathbb{R}^3$$
## Szám n-esek
$$\mathbb{R}^n$$
## Kétváltozós függvény [^2val-fv]
Adott $S\subset\mathbb{R}^2$ tartomány. $f:S\to\mathbb{R}$ kétváltozós függvény, amely az $S$ számsík elemeihez rendel egy valós számot. Értelmezési tartománya $D_f$, értékkészlete $R_f$.
> [!example] Példa
> $$f(x,y)=ax+by+c$$
#### Független változók
$$(x,y)$$
##### Függő változó
$$u$$
## Szintvonalak [^szintvonalak]
Rögzített $k\in\mathbb{R}$ mellett ábrázoljuk az $(x,y)$ pontokat, melyekre $f(x,y)=k$.
> [!info] Úgy kell elképzelni, mint a topográfiai térképeket.
> ![[topográf_térkép.jpg]]

[^fs-alaptetel]: [[Analízis 2. (2024).pdf#page=24|Analízis 2. Jegyzet: 23. oldal]]
[^parseval]: [[Analízis 2. (2024).pdf#page=26|Analízis 2. Jegyzet: 25. oldal]]
[^2val-fv]: [[Analízis 2. (2024).pdf#page=37|Analízis 2. Jegyzet: 36. oldal]]
[^szintvonalak]: [[Analízis 2. (2024).pdf#page=39|Analízis 2. Jegyzet: 38.]]
---
#todo 
- Fourier sorok 
- Pontsorozat 
- Konvergencia 
- Pontok távolsága, tartománya 
- Descartes koordináta 
- Polar koordináta 