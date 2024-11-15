---
tags:
  - elmélet
---
# Heaviside módszer [^1]
$$\frac{ax^2+bx+c}{(x+x_a)(x+x_b)(x+x_c)}=\frac{A}{x+x_a}+\frac{B}{x+x_b}+\frac{C}{x+x_c}$$
$$A=\lim_{x\to x_a}{(x-x_a)\frac{ax^2+bx+c}{(x+x_a)(x+x_b)(x+x_c)}}$$
$$B=\lim_{x\to x_b}{(x-x_b)\frac{ax^2+bx+c}{(x+x_a)(x+x_b)(x+x_c)}}$$
$$C=…$$
> [!example]+ Példa: $\frac{6x^2+22x+18}{(x+1)(x+2)(x+3)}$
> $$\frac{6x^2+22x+18}{(x+1)(x+2)(x+3)}=\frac{A}{x+1}+\frac{B}{x+2}+\frac{C}{x+3}$$
> $$A=\lim_{x\to1}{(x-1)\frac{6x^2+22x+18}{(x+1)(x+2)(x+3)}}$$
> $$B=\lim_{x\to2}{(x-2)\frac{6x^2+22x+18}{(x+1)(x+2)(x+3)}}$$
> #todo 

> [!example]+ Példa: $\frac{x}{(x-1)^2(x^2+1)}$
> #todo

[^1]: https://en.wikipedia.org/wiki/Heaviside_cover-up_method