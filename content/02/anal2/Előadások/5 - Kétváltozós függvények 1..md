---
Óra neve: Matematikai analízis 2.
Előadó: Dr. Vágó Zsuzsanna Márta
Dátum: 2024-03-22
---
## Folytonosság (két változós függvény)
$f:S\to\mathbb{R},\quad(x_0;y_0)\in S$ folytonos $(x_0;y_0)$-ban, ha
$$\forall\varepsilon>0\quad\exists\delta>0.$$
## Sorozatfolytonosság (két változós függvény)
$\forall P_n=(x_n;y_n)$ sorozatra:
$$\lim_{n\to\infty}f(P_n)=f(P_0)$$
> [!statement] Állítás
 $f$ sorozatfolytonos $p_0$-ban ekvivalens azzal, hogy folytonos.
## Határérték
$f:S\to\mathbb{R}$ függvénynek $(x_0, y_0)$-ban torlódási pontja van, ha
$$\lim_{(x,y)\to(x_0,y_1)}f(x,y)=L\quad\quad L\in\mathbb{R}$$
$$\forall\varepsilon>0\quad\quad\exists\delta>0,\quad\text{melyre ha}$$
$$0<||(x,y)-(x_0,y_0)||<\delta\Rightarrow|f(x,y)-L|<\varepsilon$$
> [!info] Következmény
> Ha $(x_0,y_0)\in\text{int}{S}$, akkor a folytonosság ekvivalens a következővel:
> $$\lim_{(x,y)\to(x_0,y_0)}f(x,y)=f(x_0,y_0)$$

> [!statement] Állítás
> Az átviteli elv itt is érvényes.
## Torlódási pont
#todo