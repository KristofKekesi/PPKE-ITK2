---
Óra neve: Matematikai analízis 1.
Előadó: Dr. Vágó Zsuzsanna Márta
Dátum: 
tags:
  - elmélet
---
# Háromszög egyenlőtlenség
Tetszőleges $a,b\in\mathbb{R}$ számokra:
$$|a+b|\leq|a|+|b|$$
> [!proof] Bizonyítás
> $$\pm{a}\leq|a|,\quad\pm{b}\leq|b|$$
> Ebből következik, hogy:
> $$a+b\leq|a|+|b|$$
> $$-a-b\leq|a|+|b|$$

#### Általános megfogalmazás
$$|a_1+a_2+…+a_n|=\bigg|\sum_{k=1}^\infty a_k\bigg|\leq\sum_{k=1}^\infty|a_k|$$

# Bernuolli egyenlőtlenség
$∀n\in\mathbb{N}$ és $∀h ≥ −1$ valós szám esetén:
$$(1 + h)^n ≥ 1 + hn.$$
# Számtani és mértani közép
## Számtani közép
$$A=\frac{a_1+a_2+...+a_n}{n}=\frac{1}{n}\sum_{k=1}^n{a_k}$$
## Mértani közép
$$G=\sqrt[n]{a_1\cdot a_2\cdot ...\cdot a_n}=\sqrt[n]{\prod_{k=1}^n{a_k}}$$
## Összefüggés közöttük

$$A\geq G$$
>[!proof] Bizonyítás
> ![[szamtani-mertani.png]]

## Számsorozat (sorozat) [^1]
Egy olyan hozzárendelés, melyben $\forall n\in\mathbb{N}$ természetes számhoz hozzárendelünk egy valós számot. Az $(a)$ sorozat $n$-edik elemét $a_n$, az egész sorozatot pedig $(a_n)$-nel jelöljük.
## Számsorozat korlátossága [^1]
Az $(a_n)$ sorozat korlátos ha $\exists K$ szám, hogy $|a_n|<K\quad\forall n\in\mathbb{N}$.
## Rész-sorozat (index-sorozat) [^2]
Adott az $(a_n)$ sorozat. Egy rész-sorozatot úgy definiálunk, hogy minden $k\in\mathbb{N}$ számhoz hozzárendelünk egy $n_k$-val jelölt indexet, melyekre igaz hogy szigorúan monoton növekvőek.
A részsorozat elemei $a_{n1}, a_{n2}, a_{n3}, …$ lesznek.

[^1]: [[Analízis 1. (2023).pdf#page=30|Analízis 1. Jegyzet: 24. oldal]]
[^2]: [[Analízis 1. (2023).pdf#page=40|Analízis 1. Jegyzet: 34. oldal]]