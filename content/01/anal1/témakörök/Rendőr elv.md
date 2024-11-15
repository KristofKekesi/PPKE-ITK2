---
tags:
  - elmélet
---
## Rendőrelv (sorozat)
Tegyük fel, hogy az $(x_n)$ és $(y_n)$ sorozatok egy $N_0$ indextől kezdve közrefognak egy harmadik sorozatot.
$$x_n\leq z_n\leq y_n\quad\quad\forall n\geq N_0$$
Tegyük fel azt is, hogy $(x_n)$ és $(y_n)$ konvergens sorozatok határértéke
$$\lim_{n\to\infty}x=\lim_{n\to\infty}y=z$$
Ekkor $(z_n)$ is konvergens.
$$\lim_{n\to\infty}z_n=z$$
> [!proof] Bizonyítás
> Legyen $\varepsilon>0$ tetszőleges. Ekkor $\exists N_1$ és $\exists N_2$, melyekre
> $$|x_n-z|<\varepsilon\quad\quad\text{ha}n\geq N_1$$
> $$|y_n-z|<\varepsilon\quad\quad\text{ha}n\geq N_2$$
> Ekkor $n\geq\max(N_0,N_1,N_2)$ esetén
> $$z-\varepsilon<x_n\leq z_n\leq y_n<z+\varepsilon,$$
> amiből a konvergencia következik.
## Rendőrelv (függvény)
Adottak az $f,g,h$ függvények.
Tegyük fel, hogy $x_0$ egy $U$ [[01 - Valós számok bevezetése#Környezet|környezetében]] teljesül, hogy
$$f(x)<g(x)<h(x)\quad\quad x\in U, x≠x_0.$$
Tegyük fel azt is, hogy a két szélső függvénynek van határértéke, és azok megegyeznek.
$$\lim_{x\to x_0}f(x)=\lim_{x\to x_0}h(x)=\alpha.$$
Ekkor a középső függvénynek van határértéke, és az megegyezik a szélső függvények határértékével.
$$\lim_{x\to x_0}g(x)=\alpha.$$
> [!proof] Bizonyítás
> #todo 