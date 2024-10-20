设 $f_u$ 为 $u$ 子树的答案，$T_u$ 为 $u$ 子树内的所有边权之和，$W_u$ 为 $u$ 子树内所有点权之和，则假如已经确定了遍历儿子的顺序 $v_1,v_2,\dots,v_k$。

那么转移式为 $f_u=\sum\limits_{i=1}^k\left(f_{v_i}+W_{v_i}\times\sum\limits_{j=1}^{i-1}T_{v_j}\right)$。

考虑交换相邻两个儿子 $v_i,v_{i+1}$ 发生的变化，显然 $v_i,v_{i+1}$ 之前以及 $v_i,v_{i+1}$ 之后的贡献部分不会变化，变化的是 $v_i,v_{i+1}$ 带来的贡献：

1. 当遍历顺序 $v_i$ 先于 $v_{i+1}$ 时，这部分贡献为 $f_{v_i}+W_{v_i}\times\sum\limits_{j=1}^{i-1}T_{v_j}+f_{v_{i+1}}+W_{v_{i+1}}\times \sum\limits_{j=1}^iT_{v_j}$
2. 当遍历顺序 $v_{i+1}$ 先于 $v_i$ 时，这部分贡献为 $f_{v_{i+1}}+W_{v_{i+1}}\times \sum\limits_{j=1}^{i-1}T_{v_j}+f_{v_i}+W_{v_i}\times \sum\limits_{j=1}^i T_{v_j}$

则遍历顺序 $v_iv_{i+1}$ 先于 $v_{i+1}v_i$ 时，需要满足的条件为
$$
f_{v_i}+W_{v_i}\times\sum\limits_{j=1}^{i-1}T_{v_j}+f_{v_{i+1}}+W_{v_{i+1}}\times \sum\limits_{j=1}^iT_{v_j}<f_{v_{i+1}}+W_{v_{i+1}}\times \sum\limits_{j=1}^{i-1}T_{v_j}+f_{v_i}+W_{v_i}\times \sum\limits_{j=1}^i T_{v_j}\\
f_{v_i}+f_{v_{i+1}}+W_{v_i}\times\sum\limits_{j=1}^{i-1}T_{v_j}+W_{v_{i+1}}\times\left(\left(\sum\limits_{j=1}^{i+1}T_{v_j}\right)+T_{v_i}\right)<f_{v_i}+f_{v_{i+1}}+W_{v_i}\times \left(\left(\sum\limits_{j=1}^{i+1}T_{v_j}\right)+T_{v_i}\right)+W_{v_{i+1}}\times \sum\limits_{j=1}^{i-1}T_{v_j}\\
W_{v_{i+1}}T_{v_i}<W_{v_i}T_{v_{i+1}}
$$
然后就将 sort 里面的 cmp 函数填上这个就可以了。

为什么将儿子序列排一遍序是正确的？我们考虑任一儿子序列 $v_1,v_2,\dots,v_k$，根据冒泡排序的原理，每次选出两个相邻的逆序对并交换，可以使逆序对刚好 $-1$，直至没有相邻的逆序对，说明序列已排序，而在本题中将两个相邻的不优对进行交换，每次交换都会使答案变得更优。直至没有相邻的不优对，说明儿子序列也已按照某种特定的顺序进行了排序，而对于任意一种序列，都可以做若干次使答案更优的交换操作使其变成这种特定顺序的序列，说明这种序列的顺序就使所有排列方式中最优的，故直接排序是完全正确的。

时间复杂度：$O(n\log n)$。