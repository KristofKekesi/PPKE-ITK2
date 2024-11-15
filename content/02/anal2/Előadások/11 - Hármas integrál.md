---
Óra neve: Matematikai analízis 2.
Előadó: Dr. Vágó Zsuzsanna Márta
Dátum: 2024-04-26
---
## Koordináta transzformáció Jacobi mátrixa
Összes lehetséges derivált egy mátrixban.
$$J(u,v)=(\phi'_u, \phi'_v; \psi'_u, \psi'_v)$$
#### Jacobi determináns
$$D(u,v)=\det J(u,v)$$
## Általános helyettesítés
$$(x,y)\leftrightarrow(u,v)$$
$$x=\phi(u,v)$$
$$y=\psi(u,v)$$
Tétel
Tegyük fel, $f:R\to\mathbb{R}$ differenciálható, $R\subset R^2$,
tegyük fel, a Jacobi deriváltja nem egylő $0$-val.
$$R'=\big\{\big(\phi(u,v), \psi(u,v)\big)\in R\big\}$$
Ekkor:
$$\int\int_Rf(x,y)dxdy=\int\int_{R'}f(\phi,\psi)D(u,v)dudv$$
## Behelyettesítés polár koordinátába
$$\exists(r,\theta)=(\cos\theta, -r\sin\theta; \sin\theta, r\cos\theta)$$
$$D(r,\theta)=r\cos^2\theta+r\sin^2\theta=r$$
## Hármas integrál
#### Kiszámolása téglatest tartományon
## Gömbi polár koordináták
#### Kiszámolása normáltartományon