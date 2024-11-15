---
Óra neve: Matematikai analízis 2.
Előadó: Dr. Vágó Zsuzsanna Márta
Dátum: 2024-04-05
---
## Kisordó
$\varepsilon(x)$ függvény kisordó, ha $x=a$-ban, ha
$$\lim_{x\to0}\frac{\varepsilon(x)}{x}=0.$$
**Jelölés**:
$$\varepsilon(x)=\sigma(x)$$
## Teljesen differenciálható
$f:S\to\mathbb{R} \quad (x,y)\in\text{int}D_f\quad$ függvény teljesen differenciálható, ha $\exists A, B, C$ számok, amelyre
$$f(x+\Delta x, y+\Delta y)=A\Delta x+B\Delta y+c+\sigma\big(\sqrt{\Delta x^2+\Delta y^2}\big)$$
> [!statement] Állítás
> Ha $f$ differenciálható $(x,y)$-ban, akkor $C=f(x,y)$
> $$A=f'_x(x,y)$$
> $$B=f'_y(x,y)$$
> > [!proof]- Bizonyítás
> > 1. eset $\Delta x=\Delta y=0$
> > $$f(x+\Delta x, y+\Delta y)=A\Delta x+B\Delta y+c+\sigma\big(\sqrt{\Delta x^2+\Delta y^2}\big)\Rightarrow$$
> > $$\Rightarrow f(x,y)=0+0+c+\sigma(o)$$
> > 2. eset $\Delta y=0$
> > $$f(x+\Delta x, y+\Delta y)=A\Delta x+B\Delta y+c+\sigma\big(\sqrt{\Delta x^2+\Delta y^2}\big)\Rightarrow$$
> > $$\Rightarrow f(x+\Delta x,y)=A\Delta x+0+f(x,y)+\sigma(\Delta x)$$
## Gradiáns (gradiens)
Ha $f$ differenciálható $(x,y)$-ban, akkor a derivált
$$\text{grad}f(f'_x,f'_y).$$
**Jele**:
$$\text{grad}f=\nabla f.$$
## Derivált függvény
$$\text{grad}S\to\mathbb{R}^2$$
> [!info] Következmény
> Ha $f$ differenciálható, akkor folytonos.
> > [!proof]- Bizonyítás
> > $$\lim_{(\Delta x, \Delta y)\to(0,0)} f(x+\Delta x, y+\Delta y)=f(x,y)$$
## Hesse mátrix
Tegyük fel, hogy $f'_x$ és $f'_y$ léteznek $(x_0,y_0)$ egy környezetében, és ott differenciálható. Ekkor a második derivált olyan mátrix, ami
$$H=(f_x''x\quad f_x''y;\quad_y''x\quad f_y''y;)=(\text{grad}(f'_x); \text{grad}(f'_y);)$$
## Irány menti derivált
Adott $\alpha\in[0, 2\pi)$. $\alpha$ irány menti derivált, ha
$$D_\alpha f(x_0,y_0)=\lim_{h\to 0}\frac{f(x_0+h\cos\alpha,y_0+h\sin\alpha)-f(x_0,y_0)}{h}$$
> [!statement] Állítás
> Ha $f$ differenciálható, akkor $\forall\alpha$ mellett $\exists D_\alpha f$, és $D_\alpha f(x_0, y_0)=\big<\text{grad}f, (\cos\alpha, \sin\alpha)\big>=f'_x(x_0,y_0)\cos\alpha+f'_y(x_0, y_0)+f'y(x_0,y_0)\sin\alpha$
## Irány
> [!info] Következmény
> Ha $f$ differenciálható, akkor $\forall v\in\mathbb{R}^2$
## Érintősík egyenlete
$$z-z_0=f'_x(P_0)(x-x_0)+f'_y(P_0)(y-y_0)$$
$$z_0=f(P_0)$$