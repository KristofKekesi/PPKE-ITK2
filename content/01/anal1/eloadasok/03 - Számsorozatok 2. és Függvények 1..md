---
Óra neve: Matematikai analízis 1.
Előadó: Dr. Vágó Zsuzsanna Márta
Dátum: 2023 Okt. 12.
tags:
  - elmélet
---
## Konvergens [^1]
Ha tart valahova és a határértéke nem $\infty$ és nem $-\infty$. 

$|a_n-A| < \varepsilon$, $\forall n > N$. 

Másként leírva $\lim_{n\to \infty}a_n = A$
## Divergens [^1]
Ha nem konvergens.
### Típusai
- $+\infty$-be divergál, ha $\lim_{n\to\infty}a_n=+\infty$ (minden határon túl nő)
- $-\infty$-be divergál, ha $\lim_{n\to\infty}a_n=-\infty$
- a sorozat több pont körül torlódik (például $a_n=(-1)^n$)
## [[#Konvergens [ 1\|Konvergencia]] és a [[02 - Számsorozatok 1.#Számsorozat korlátossága [ 1]|korlátosság]] kapcsolata
1. Adott sorozat monoton növő és felülről korlátos $\Rightarrow$ konvergens
2. monoton csökkenő és alulról korlátos $\Rightarrow$ konvergens
3. Bolzano-Weierstrass tétel: Minden korlátos sorozatnak van konvergens részsorozata.
> [!proof] Bizonyítás
> Tekintsünk egy $(a_n)$ korlátos sorozatot. A minden sorozatnak van monoton részsorozata  ([[Analízis 1. (2023).pdf#page=40|2.1]]) tétel szerint van $(a_{n_k})$ monoton részsorozata, amely szintén korlátos. Ezért a részsorozat konvergens is.
## Számsorozat határértéke [^1]
Konyhanyelven: arra vagyunk kíváncsiak, hogy az $n$ növelésével mi történik az $a_n$ számokkal.

Azt mondjuk, hogy az $(a_n)$ sorozat konvergens, és határértéke az $A$ szám, ha ez rendelkezik a következő tulajdonsággal: $\forall\varepsilon>0$-hoz létezik egy $\varepsilon$-tól függő $N\in\mathbb{N}$ küszöbindex, melyre
$$|a_n-A|<\varepsilon\quad\quad\forall n\geq N.$$
Ezt így jelöljük:
$$\lim_{n\to\infty}a_n=A.$$
## Euler féle szám
$$e=\lim_{n\to\infty}\bigg(1+\frac{1}{n}\bigg)^n$$
## Rekurzív sorozat [^2]
Olyan sorozat aminek a képletében hivatkozunk egy a sorozat másik elemére.
## Torlódási pont
$t$ akkor torlódási pontja a sorozatnak, ha a $t$ pont [[01 - Valós számok bevezetése#Környezet|környezet]]ében a sor végtelen sok eleme található meg. Vagyis  a $(t-\varepsilon; t + \varepsilon)$ intervallumon belül ($\varepsilon > 0$), végtelen sok eleme van a sornak. [^3]
> [!thessis] Tétel
> Ha az $(a_n)$ sorozat [[#Konvergens [ 1]|konvergens]], akkor egyetlen torlódási pontja van, ami egyben a határértéke is.
# Függvények
## X, Y halmazok [^4]
Adott két halmaz ($X, Y$) ezek között fennáll egy $f: X \to Y$ leképezés. $x\in X$ hozzárendelünk egyetlen y elemet az Y halmazból. Ezt így jelöljük:
$$f(x) = y$$
$$x \rightarrow y$$
## Injektív [^4]
Ha $f(x_1) ≠ f(x_2)$ bármilyen $x_1,x_2\in X$ esetén ("Nincs két azonos y").
## Szürjektív [^4]
Ha minden $y\in Y$-hoz létezik x, amely $f(x) = y$. ("Nincs két azonos x")
## Bijektív [^5]
Ha a függvény [[03 - Számsorozatok 2. és Függvények 1.#Injektív [ 4]|injektív]], és [[03 - Számsorozatok 2. és Függvények 1.#Szürjektív [ 4]|szürjektív]] is, ilyenkor a függvény kölcsönösen egyértelmű az X és Y halmazok között.
## Inverz függvény
Ha a függvény [[03 - Számsorozatok 2. és Függvények 1.#Bijektív [ 5]|bijektív]] (kölcsönösen egyértelmű), akkor létezik inverz függvénye:
$$f^{-1}: Y \to X$$ melyre:
$$f^{-1}(f(x))=x$$
$$f^{-1}(f(y))=y$$

[^1]: [[Analízis 1. (2023).pdf#page=33|Analízis 1. Jegyzet: 27. oldal]]
## Összetett függvény [^5]
Adott két függvény. Ezek $f:X \to Y$ és $g: Y \to Z$. Az összetett függvény $X \to Z$ típusú hozzárendelés, vagyis $g(f(x))$.
## Értelmezési tartomány [^4]
Jele: D<sub>f</sub> (az angol DOMAIN szóból)
## Értékkészlet [^4]
$\forall y \in Y$ amely megjelenik képként, vagyis $$D_f = \{y\in Y: \exists x \in X, f(x) = y\}$$
Jele: R<sub>f</sub> (az angol RANGE szóból)
## Függvény gráfja [^5]
$$\{x, f(x) : x\in D\} \subset R^2$$

[^1]: [[Analízis 1. (2023).pdf#page=33|Analízis 1. Jegyzet: 27. oldal]]
[^2]: [[Analízis 1. (2023).pdf#page=39|Analízis 1. Jegyzet: 33. oldal]]
[^3]: [[Analízis 1. (2023).pdf#page=50|Analízis 1. Jegyzet: 44. oldal]]
[^4]: [[Analízis 1. (2023).pdf#page=70|Analízis 1. Jegyzet: 64. oldal]]
[^5]: [[Analízis 1. (2023).pdf#page=71|Analízis 1. Jegyzet: 65. oldal]]