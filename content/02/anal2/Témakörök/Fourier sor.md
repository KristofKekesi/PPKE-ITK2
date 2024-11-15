Egy $f$ függvény felírható $sin$ és $cos$ függvények összegeként, ha $f$:
- $2\pi$-ként periódikus,
- szakaszonként differenciálható,
- elsőfajú szakadásokkor a két egyoldali határérték átlagát veszi fel a függvény.
Ekkor:
$$f(x)=\frac{a_0}{2}+\sum_{k=1}^\infty\big(a_k\cos(kx)+b_k\sin(kx)\big)\quad k\in\mathbb{N}$$
$$a_k=\frac{1}\pi\int_{-\pi}^{\pi}f(x)\cos(kx)dx$$
$$b_k=\frac{1}\pi\int_{-\pi}^{\pi}f(x)\sin(kx)dx$$
#### Speciális esetek:
###### Páros függvény:
$$b_k=0\quad\quad\forall k\in\mathbb{N}$$
###### Páratlan függvény:
$$a_k=0\quad\quad\forall k\in\mathbb{N}$$
> [!info] Függvények szorzata
> Azonos paritás: páros
> Különböző paritás: páratlan

> [!warning] Fontos
> $$\cos(k\pi)=(-1)^k$$
## Feladatok
- [[2. HF - Fourier sor.pdf]]
- [[3. HF - Fourier sor.pdf]]

---
<iframe width="560" height="315" src="https://www.youtube.com/embed/c2loL7HcrmI?si=L6XUqYjFa_R7RxHF" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" referrerpolicy="strict-origin-when-cross-origin" allowfullscreen></iframe>