---
tags:
  - elmélet
---
Az integrálás ($\int fdx$) az $f$ függvényhez tartozó $F$ primitív függvény keresése.
$$F'(x)=f(x)$$
#### Konstans kiemelése
$$\int{cf}=c\cdot\int{f}$$
#### Hasznos képletek
$$\int{\frac{f'}{f}}dx=\ln|f|+c\quad\quad c\in\mathbb{R}$$
$$\int{f^\alpha(x)}dx=\frac{f^{\alpha+1}}{\alpha+1}+c\quad\quad c\in\mathbb{R}$$
> [!error] Típushiba
> Ha az $x$ meg van szorozva egy $c$ konstanssal, akkor elosztjuk $c$-vel hogy megkapjuk az integráltat.
> > [!example]- Példa
> > $$\int\cos(3x)=\frac{sin(3x)}{3}$$

$$\int f(ax+b)\cdot f'(x)dx=\frac{F(ax+b)}{a}+c\quad\quad c\in\mathbb{R}$$
#### Alap képletek
$$\int x^ndx=\frac{x^{n+1}}{n+1}+c\quad\quad c\in\mathbb{R}$$
$$\int\frac{1}{x}dx=\ln{x}\quad\quad c\in\mathbb{R}$$
> [!info]
> Az első alap képletbe helyettesítve $0$-át kapnánk a nevezőbe, ezért sem használható ebben az esetben.

$$\int{a^xdx}=\frac{a^{x}}{\ln a}+c\quad\quad c\in\mathbb{R}\quad\quad\text{Ezért:}$$
$$\int{e^x}dx=\frac{e^x}{\ln e}+c=e^x+c\quad\quad c\in\mathbb{R}$$
$$\int{\sin(x)}dx=-\cos(x)+c\quad\quad c\in\mathbb{R}$$
$$\int\cos(x)dx=\sin(x) + c\quad\quad c\in\mathbb{R}$$
$$\int\tan(x)dx=-\ln\cos(x)+c\quad\quad c\in\mathbb{R}$$
$$\int\cot(x)dx=\ln\cos(x)+c\quad\quad c\in\mathbb{R}$$
$$\int\frac{1}{\cos^2(x)}dx=\tan(x)+c\quad\quad c\in\mathbb{R}$$
$$\int\frac{1}{sin^2(x)}dx=\cot(x)+c\quad\quad c\in\mathbb{R}$$
$$\int{\frac{1}{1+x^2}}dx=\arctan(x)+c\quad\quad c\in\mathbb{R}$$
[[Integrálás.pdf|Szili László féle integrál táblázat.]]
> [!info]
> A fenti PDF nagyon redundáns, olyan képleteket is megkülönböztet, amiket a már definiált képletekkel ki lehet számolni.
## Integrálós feladatok
- [[06 HF.pdf]]
- [[01/anal1/Példatár.pdf#page=83|Példatár 82. oldal]]
- $\int_{-\pi}^{\pi}{\cos^4(x)\cdot\sin^2(x)}dx$
## Ellenőrzéshez online kalkulátor
[Integral Calculator](https://www.integral-calculator.com)