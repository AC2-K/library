## 概要
普通のセグメント木では、以下のような処理をするのが難しい。

> 問題:\
> モノイド $(S,\cdot,e)$ の列 $a=(a_1,a_2,\dots,a_{10^9}) $ について
>    - $i$ と $x\in X$ が与えられたとき $a_i\leftarrow x$
>    - 区間 $[l,r)$ が与えられたとき 区間積を計算
>
> ただし、 $a$ は最初 $e$ で埋められているとする。

オンラインで処理するとなると、TLE,MLEしてしまう...と思う。\
なので、クエリに出てくる添え字を座標圧縮し、オフラインで答えることになる。
\
\
ただ、このDynamic Segtreeを使えば**オンラインで**処理できる!!!
\
普通のセグメント木に比べてメモリ消費は少ないが、若干重い。
## 使い方
普通のセグメント木と同じ。

### コンストラクタ