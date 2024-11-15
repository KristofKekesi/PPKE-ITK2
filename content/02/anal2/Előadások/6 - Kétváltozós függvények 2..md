---
Óra neve: Matematikai analízis 2.
Előadó: Dr. Vágó Zsuzsanna Márta
Dátum: 2024-03-25
---
#### Racionális törtfüggvény
Polinomok hányadosa
$$\frac{\text{polinom}_1(x,y)}{\text{polinom}_2(x,y)}$$
> [!example] Példa
> $$h(x,y)=\frac{xy}{x^2+y^2}$$
## $f$ folytonos
$f$ kétváltozós függvény folytonos $S$ tartományban, ha $\forall(x,y)\in S$-ben folytonos.
## Bolzano tétel
Ha $S$ összefüggő, akkor $\forall P, P'\in S$ pontok esetén
$$A=f(P)<f(P')=B$$
$\forall C$ számra $A<C<B\quad\exists(x_0,y_0)\in S\quad f(x_0,y_0)=C$
## Vonal a síkon
$\Gamma\subset\mathbb{R}^2$ vonal, ha
$$\exists\gamma[\alpha,\beta]\to\mathbb{R}^2$$
$$\Gamma=\{\gamma(t):t\in[\alpha,\beta]\}$$
#### Folytonos vonal
Folytonos vonal, ha $\gamma$ folytonos
$$\gamma(t)=\big(x(t),y(t)\big)$$
#### Koordináta függvény
Két koordináta függvény $x,y:[\alpha,\beta]\to\mathbb{R}$

## $S\subset\mathbb{R}^2$ összefüggő
$S\subset\mathbb{R}^2$ összefüggő, ha $\forall P,P'\in S$-ben $\exists\Gamma$ sima
$$\gamma(x)=P$$
$$\gamma(\beta)=P'$$
## Weierstrass 1. tétele
Tegyük fel, hogy $S$ korlátos és zárt. $f:S\to\mathbb{R}$ folytonos.
Ekkor $f$ korlátos. ($\equiv R_f$ korlátos)
## Weierstrass 2. tétele
Tegyük fel, hogy $S$ korlátos és zárt. $f:S\to\mathbb{R}$ folytonos.
Ekkor létezik a minimum és maximum pont az értelmezési tartományon.
## Differenciálható
$f:S\to\mathbb{R}$, $S\subset\mathbb{R}^2$ differenciálható $(x_0,y_0)\in\text{int}S$ pontban, ha
$$\exists\lim_{(x,y)\to(x_0,y_0)}\frac{f(x,y)-f(x_0,y_0)}{(x,y)-(x_0,y_0)}$$
## Parciális deriválás
$$f:S\to\mathbb{R}\quad(x_0,y_0)\in\text{int}S$$
#### $x$ szerinti parciális derivált
$$\exists\lim_{x\to x_0}\frac{f(x,y_0)-f(x_0,y)}{x_0-x_0}.$$
Jelölése: $f'x(x_0,y_0)=\frac{\delta f}{\delta x}(x_0,y_0)$
#### $y$ szerinti parciális derivált
$$\exists\lim_{y\to y_0}\frac{f(x_0,y)-f(x_0,y_0)}{y-y_0}.$$
Jelölése: $f'y(x_0,y_0)=\frac{\delta f}{\delta y}(x_0,y_0)$
## Metszetfüggvények
#todo
## Másodrendű parciális derivált
#todo

---
#todo
- Sorozatfolytonosság 
- Folytonosság tartományban 
- Vonal 