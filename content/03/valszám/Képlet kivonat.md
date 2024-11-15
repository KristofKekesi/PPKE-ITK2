---
Óra neve: Valószínűségszámítás
tags:
  - elmélet
---
$$P(A+B)=P(A)+P(B)-P(AB)$$
$$P(A-B)=P(B)-P(AB)$$
**[[02#Feltételes valószínűség|Feltételes valószínűség]]:**
$$P(A|B)=\frac{P(AB)}{P(B)}$$
**Szorzási szabály:**
$$P(AB)=P(A|B)\cdot P(B)=P(B|A)\cdot P(A)$$
**Permutáció:**
$n$ dolgot hogy tudunk úgy sorba helyezni, hogy számít a sorrend?
$$n!$$
**Ismétléses permutáció:**
$n$ dolog (lehet azonos is) úgy sorba rendezni, hogy számít a sorrend, kivéve ha azonos.
$$\frac{n!}{\text{azonos}!}$$
**Variáció:**
$n$ elemből $k$ darabot sorrendbe állítok úgy, hogy nem számít a sorrend.
$$\frac{n!}{(n-k)!}$$
**Ismétléses variáció:**
**Kombináció:**
$n$ elemből kiválasztok $x$-et úgy, hogy nem számít a sorrend.
$$\binom{n}{x}$$
> [!info] Számológépen
> <kdb>nCr</kdb>

**Ismétléses kombináció:**
$$\binom{n+k-1}{k}$$
**Bayes tétel:**
- ha teljes eseményrendszer
- semelyik eseményén $P(B_i)≠0\quad\forall i$-re
$$P(B_k|A)=\frac{P(A|B_k)B_k}{\sum_{i=1}^nP(A|B_i)P(B_i)}$$
**Teljes független eseményrendszer:**
$$P(A_iA_j…A_k)=P(A_i)P(A_j)…P(A_k)$$
**Binomiális eloszlás:**
Ha két opciónk van, és ezekből szeretnénk úgy kiválasztani, hogy nem számít a sorrend.
$$P(\xi=k)=\binom{n}{k}P^k\big((1-P)^{n-k}\big)$$
$$E(\xi)=nP$$
$$D(\xi)=\sqrt{nP(1-P)}$$
**Hipergeometriai eloszlás:**
Visszatevés nélküli mintavétel.
$$P(\xi=k)=\frac{\binom{s}{k}\binom{m-s}{n-k}}{\binom{m}{n}}$$
$$E(\xi)=n\frac{s}{m}$$
$$D(\xi)=\sqrt{nP(1-P)\bigg(\frac{1-n}{1-m}\bigg)}$$
**Geometriai eloszlás:**
Mekkora az esélye, hogy egy esemény csak x. alkalomra teljesül?
$$P(\xi=k)=(1-p)^{k-1}\cdot p$$
$$E(\xi)=\frac{1}{p}$$
$$D(\xi)=\sqrt{\frac{1-p}{p^2}}$$
**Negatív binomiális eloszlás:**
Addig csinálok valamit, amíg $n$-szer be nem következik, és az $n$-dik bekövetkezés $\xi$ lesz.
$$P(\xi=n+k)=\bigg(\frac{n+k-1}{n-1}\bigg)(1-p)^kp^n$$
$$E(\xi)=n\frac{1}{p}$$
$$D(\xi)=\sqrt{n\frac{1-p}{p^2}}$$
**Poisson eloszlás:**
$$P(\xi=k)=\frac{\lambda^k}{k!}e^{-\lambda}$$
$$E(\xi)=\lambda$$
$$D(\xi)=\sqrt{\lambda}$$