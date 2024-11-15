---
Óra neve: Matematikai analízis 2.
Előadó: Dr. Vágó Zsuzsanna Márta
Dátum: 2024-04-08
---
> [!statement] Állítás
> Ha $f'_x$ és $f'_y$ függvények folytonosak, akkor az $f$ függvény differenciálható.
## Lánc szabály
#### Egy paraméternél
$$(f\circ g)'=f'\circ g\cdot g'$$
#### Két paraméternél
1. eset
	$f=f(u)$
	$u=g(x,y)$
	$$F(x,y)=f\big(g(x,y)\big)$$
	$$F'_x=f'(g(x,y))\cdot g'_x(x,y)$$
	$$F'_y=f'(g(x,y))\cdot g'_y(x,y)$$
	$\frac{\delta F}{\delta x}=\frac{df}{du}\cdot\frac{\delta u}{\delta x}$
> [!example] Példa
> $f(u)=u^2$
> $g(x,y)=\sin(xy)$
> $$F(x,y)=\sin(xy)^2$$
> $$F'_x=2\sin(xy)\cdot y$$
> $$F'_y=2\sin(xy)\cdot x$$
2. eset
	$f(x,y)$
	$x=x(t)$
	$y=y(t)$
	$$F(x)=f\big(x(t), y(t)\big)$$
	$$F'(t)=f'_x\cdot x'(t)+f'_y\cdot y'(t)$$
3. eset
	$f(u,v)$
	$u=\phi(x,y)$
	$v=\psi(x,y)$
	$$F(x,y)=f(\phi(x,y),\psi(x,y))$$
	$$F'_x(x,y)=f'_u\cdot \phi'_x+f'_v\cdot\psi'_x$$
## Szélsőérték számítás
Adott $f:S\to\mathbb{R}$ függvény.
Az $(x_0,y_0)$ pont **lokális minimum** érték, ha $\exists u\subset S$ környezet, amire
$$f(x,y)\geq f(x_0,y_0)\quad\quad\forall(x,y)\in u$$
Az $(x_0,y_0)$ pont **lokális maximum** érték, ha $\exists u\subset S$ környezet, amire
$$f(x,y)\geq f(x_0,y_0)\quad\quad\forall(x,y)\in u$$
Az $(x_0,y_0)$ pont **globális minimum** érték, ha $\exists u\subset S$ környezet, amire
$$f(x,y)\geq f(x_0,y_0)\quad\quad\forall(x,y)\in S$$
Az $(x_0,y_0)$ pont **globális maximum** érték, ha $\exists u\subset S$ környezet, amire
$$f(x,y)\geq f(x_0,y_0)\quad\quad\forall(x,y)\in S$$