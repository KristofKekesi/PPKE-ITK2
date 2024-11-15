---
Óra neve: Matematikai analízis 1.
Előadó: Dr. Vágó Zsuzsanna Márta
Dátum: 2023 Okt. 09.
tags:
  - elmélet
---
# Számhalmazok[^1]
## $\mathbb{N}$: természetes számok halmaza
- jele: $\mathbb{N}$ (az angol "natural" szóból ered)
- Legkisebb eleme az $1$
- Minden elem után van következő
### Teljes indukció (bizonyítási elv)
Legyen $A_n$ valamilyen állítás minden $n$ természetes számra. Ha:
1. $A_1$ teljesül
2. Tegyük fel, minden $n$-re igaz lesz. (Indukciós feltétel)
3. $A_{n+1}$ mindig igaz $A_{n+1}$ teljesülése esetén,
akkor a fenti $A_n$ tulajdonság teljesül minden $n$-re.
### Természetes számok halmazának bővítése
- összeadás: Nem vezet ki a természetes számok halmazából
- kivonás: Kivezet a természetes számok halmazából $\to$ Egész számok halmaza
## $\mathbb{Z}$: egész számok halmaza
- jele: $\mathbb{Z}$ ("zahl" szóból ered)
### Egész számok halmazának bővítése
- szorzás: Kivezet az egész számok halmazából $\to$ Valós számok halmaza
- osztás: Kivezet az egész számok halmazából $\to$ Valós számok halmaza
## $\mathbb{R}$: Valós számok halmaza
- jele: $\mathbb{R}$
- minden valós szám kifejezhető két egész szám osztásával
# Axiómák
- Alaptulajdonságok
## Kvantorok
- ∀: minden
- ∃: létezik
- ∃!: egyértelműen létezik (csak $1$ létezik)
## Asszociativitás
Jelentése: csoportosíthatóság.
Például: $(x + y) + z = x + (y + z)$.
- összeadás
- szorzás
## Kommutativitás
Jelentése:  felcserélhetőség.
Például: $x + y = y + x$.
- összeadás
- szorzás
## Disztributivitás
Jelentése: műveletek összekapcsolódása.
Például: $(a + b) \cdot c = (a \cdot c) + (b \cdot c)$.
## Műveleti alaptulajdonságok
1. Az összeadás [[01 - Valós számok bevezetése#Asszociativitás|asszociatív]]
2. $x + 0 = x\quad ∀x ∈\mathbb{R}$
3. $∀x ∈\mathbb{R}$ van $∃u ∈\mathbb{R}$ tartozik $x+u=0$. Ez az $x$ szám ellentettje.
4. Az összeadás [[01 - Valós számok bevezetése#Kommutativitás|kommutatív]]
5. A szorzás [[01 - Valós számok bevezetése#Asszociativitás|asszociatív]]
6. $x \cdot 1 = x$
7. $∀x ∈\mathbb{R}, x≠0$ tartozik $∃u ∈\mathbb{R}$, melyre $u=1/x$. Ez a szám reciproka.
8. A szorzás [[01 - Valós számok bevezetése#Kommutativitás|kommutatív]]
9. A szorzás [[01 - Valós számok bevezetése#Disztributivitás|disztributív]] az összeadásra
## Rendezési reláció tulajdonságai
10. $∀x ∈\mathbb{R}$ esetén  $x ≤ x$ (a rendezési reláció reflexív)
11. $∀x≠y$ esetén az $x ≤ y$ és $y ≤ x$ közül pontosan egy igaz.
12. Ha $x ≤ y$ és $y ≤ z$ ⇒ $x ≤ y$ (a rendezési reláció tranzitív)
13. Ha $x ≤ y$ ⇒ $x + z ≤ y + z$
14. Ha $x ≤ y$ és $0 ≤ z$ ⇒ $x \cdot z ≤ y \cdot z$
15. Arcimedeszi axióma: Nincs nagyobb elem
16. Cantor-féle axióma
## Cantor-féle axióma
Legyen adott korlátos és zárt intervallumok egy sorozata:
$$I_1=[a_1,b_1],\quad I_2=[a_2,b_2],\quad …,$$
melyek egymásba skatyujázottak:
$$I_1\supseteq I_2\supseteq…$$
akkor az intervallumoknak __van közös pontja__.
**Más szóval**: $∃c ∈\mathbb{R}$ melyre $c ∈ I_k , ∀k ∈\mathbb{N}$
> [!info] Irracionális számok beletartoznak a racionális számok halmazába
> A Cantor-axiómát átértelmezve vesszük a "bal oldalt" és a "jobb oldalt".
> $$a_1\leq a_2\leq a_n\quad\quad\text{és}\quad\quad b_1\geq b_2\geq b_n$$.
> Ezekre teljesülnek, hogy: $a_n\leq b_n\quad\quad\forall n\in\mathbb{N}.$
> Ekkor:
> $$a_n\leq c\leq b_n\quad\quad\forall n\in\mathbb{N}.$$

> [!proof] Bizonyítás (Indirekt módon)
> A Cantor-axióma azt mondja ki, hogy létezik közös pont.
> Tegyük fel, két közös pont létezik, és
> $$c,d\in I_n\quad\quad\forall n\quad\quad c<d.$$
> Legyen $\varepsilon=d-c$. Ekkor létezik $n\in\mathbb{N}$, amire $b_n-a_n<\varepsilon$.
> Ekkor mivel
> $$c\in[a_n,b_n],\quad\quad d\in[a_n,b_n],$$
> ezért $\varepsilon=d-c\leq b_n-a_n<\varepsilon$, ami ellentmondás.
# Summa
$$\sum_{futóindex}^{meddig} tag$$
> [!example]- Példák
> - Első $n$ szám összege
$$\sum_{k=1}^{n} k$$
> - Első $n$ páros szám összege
$$\sum_{k=1}^{n} 2k$$
> - Hárommal osztható kétjegyű számok összege
$$\sum_{k=4}^{33} 3k$$
> - Száz és kétszáz közötti (nyílt intervallum) természetes számok reciprokainak az összege
$$\sum_{k=101}^{199}\frac{1}{k}$$
# Produktum
Röviden a summa működése összeadás helyett szorzással.
$$\prod_{futóindex}^{meddig} tag$$
# Korlátosság [^2]
Legyen $H\subset\mathbb{R}$ halmaz a valós számoknak részhalmaza.
## Alulról korlátos,
ha $\exists k\in\mathbb{R}$(ez lesz az alsó korlát), amire $k≤x\quad\forall x\in H$.
## Felülről korlátos
ha $\exists K\in\mathbb{R}$ (ez lesz a felső korlát), amire $K\geq x\quad\forall x\in H$.
## Korlátos,
ha a halmaz alulról és felülről is korlátos. (Van alsó és felső korlátja is)
# Supremum
A halmaz legkisebb felső korlátja.
Jele: $\sup(H)$.
> [!info] Kapcsolata a maximummal
>  Ha a $H$ halmaznak az elemei közül van legnagyobb, akkor az a supremuma.
> $$\sup(H) = \max(H)$$
# Infimum
A halmaz legnagyobb alsó korlátja.
Jele: $\inf(H)$.
> [!info] Kapcsolata a minimummal
>  Ha a $H$ halmaznak az elemei közül van legkisebb, akkor az az infimuma.
> $$\inf(H) = \min(H)$$
# Ekvivalens
Azonos.
# Környezet
Egy x<sub>0</sub> valós szám __Környezetei__ az $(x_0- \varepsilon; x_0 + \varepsilon)$ nyílt intervallumok, ahol $\varepsilon > 0$ tetszőleges valós szám.
### Belső pont
Az $x_0 ∈ R$ pont a H halmaz belső pontja, ha $∃\varepsilon > 0$. Amin $(x_0 − \varepsilon, x_0 + \varepsilon) ⊆ H$.
Jele: $\text{int}(H)$ (az angol "interior" szóból).
### Külső pont
Az $x_0 ∈ R$ pont a H halmaz belső pontja, ha $∃\varepsilon > 0$. Amin $(x_0 − \varepsilon, x_0 + \varepsilon) \cap H= \emptyset$.
Jele: $\text{ext}(H)$ (az angol "exterior" szóból).
### Határpont
Az $x_0 ∈ R$ pont a H halmaz határpontja, ha $∃\varepsilon > 0$. Ha a környezet tartalmaz H-n belüli (Belső pont) és H-n (Külső pont) kívüli pontokat is.
Jele: $\delta (H)$
- A halmaz nyílt, ha minden pontja belső pont
- A halmaz zárt ha $\delta H ⊆ H$
- A H halmaz lezárása $\overline{H} = H ∪ \delta H$

[^1]: [[Analízis 1. (2023).pdf#page=8|Analízis 1. Jegyzet: 2. oldal]]
[^2]: [[Analízis 1. (2023).pdf#page=17|Analízis 1. Jegyzet: 11. oldal]]