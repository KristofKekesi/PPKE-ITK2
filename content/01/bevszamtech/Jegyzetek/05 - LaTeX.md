---
Óra neve: Bevezetés a számítástechnikába
Előadó: Naszlady Márton Bese
Dátum: 2023 Okt. 25.
tags:
  - elmélet
---
# Preambulum
A LaTeX dokumentum `\begin{document}` előtti része. Általában globális paramétereit tudjuk beállítani.
**Példa a preambulumra**:
```latex
\documentclass[a4paper, twocolumn]{article} %méretarány

\usepackage[pdftex,unicode,raiselinks,colorlinks]{hyperref} %működő linkek
\usepackage[margin=2cm]{geometry} %margó
\usepackage[utf8]{inputenc}
\usepackage{amsmath} %matematikai modul

\usepackage[magyar]{babel} %magyar nyelv beállítása

\title{cím}
\author{szerző neve}
\date{\today} %a \today paranccsal a fordítás napját helyettesíti be
```
# Lábjegyzet, linkek
```latex
szöveg\footnote{lábjegyzék}

%konkrét számmal
szöveg\footnote[szám]{lábjegyzék}
```

```latex
\href{URL}{megjelenítendő szöveg}
\url{URL}
```
# Matematikai kifejezések
Minden Obszidián-ban használható matematikai kifejezés működő LaTeX kifejezés.
Hasznos editor: [Codecogs LaTeX editor](https://latex.codecogs.com/eqneditor/editor.php)
## Környezetek
### Sorközi  kifejezés
Az Obsidian-ban is működik a `$<kifejezés>$`.
### Sorkihagyásos  kifejezés
Az Obszidián-ban is működik a `$$<kifejezés>$$`.
### Sorkihagyásos kifejezés
```latex
\begin{equation}
<kifejezés>
\end{equation}
```
## Szimbólumok
- kihagyás: `\quad` $a \quad b$
- végtelen: `\infty` $\infty$
- hasonlóság: `\sim` $\sim$
- szorzás jel: `\cdot` $\cdot$
# Ábrák
Be kell importálni a `\usepackage{graphicx}`-t a [[05 - LaTeX#Preambulum|preambulumba]].
```LaTeX
\begin{figure}
	\centering
	\includegraphics{kép.png}
	\caption{Szöveg a képről}
\end{figure}
```
### Ábrák elhelyezése az oldal belül
```latex
\begin{figure}[!ht]
```
- `h`: ott ahol leírod (here)
- `t`: felül (top)
- `b`: alul: (bottom)
- `p`: külön oldalon helyezi el, ahol csak ábrák vannak (page)
- `!`: nagyon szeretnéd hogy úgy legyen
### Ábrák mérete
```LaTex
\includegraphics[width=0.5\textwidth]
\includegraphics[scale=0.5]
```
# Táblázat
Hasznos editor: [Tablesgenerator](https://www.tablesgenerator.com)
```LaTeX
\begin{tabular}{|l||rc}
	szöveg & szöveg \\
	\hline
	szöveg & szöveg
\end{tabular}
```
# Hivatkozások (biblatex)
```LaTeX
% Preambulum
\usepackage[style = ieee]{biblatex} \addbibresource{hivatkozasok.bib}

\cite{hivatkozás}

% Hivatkozás megjelenítése alul
\printbibliography
```
# Hasznos dokumentumok
- [[Csárdi Gábor - LaTeX nem túl röviden.pdf]]
- [[LaTeX puska.pdf]]