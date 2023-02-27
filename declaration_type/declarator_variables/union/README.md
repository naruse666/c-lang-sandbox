# `union` の宣言
一連の変数の値、および共有体に名前を付けるタグ (オプション) を指定します。 変数の値は共用体の "メンバー" と呼ばれ、異なる型を指定できます。 共有体は他の言語における "バリアント レコード" に似ています。

## 例
```
union sign   /* A definition and a declaration */
{
    int svar;
    unsigned uvar;
} number;
```

要素数指定。
```
union               /* Defines a two-dimensional */
{                   /*  array named screen */
    struct
    {
      unsigned int icon : 8;
      unsigned color : 4;
    } window1;
    int screenval;
} screen[25][80];
```

# 共用体の格納
すべてのメンバーは、同じメモリ空間に格納され、同じアドレスで開始されます。
```
union         /* Defines a union named x */
{
    char *a, b;
    float f[20];
} x;
```
