# C 浮動小数点定数
符号付き実数を表す 10 進数.  
`float`, `double`, `long double`がある。
```
15.75
1.575E1   /* = 15.75   */
1575e-2   /* = 15.75   */
-2.5e-3   /* = -0.0025 */
25E-4     /* =  0.0025 */
```

サフィックスにより、float, double, long doubleが決定される。  
何もない-> `double`, `l`or`L` -> `long double`, `f`or`F` -> `float`.
```
10.0L  /* Has type long double  */
10.0   /* Has type double       */
10.0F  /* Has type float        */
```