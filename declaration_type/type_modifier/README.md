# 型修飾子
`volatile` 型修飾子は、同時実行されるスレッドなど、そのプログラムの制御範囲以外の要素によって値を変更できる項目を宣言します。  
型修飾子 const 、 restrict 、 volatile は、宣言内で 1 回だけ使用できます。  

有効
```
typedef volatile int VI;
const int ci;
```

無効
```
typedef int *i, volatile *vi;
float f, const cf;
```

## 構文
```
type-qualifier:
 const
 restrict
 volatile
```

有効な宣言
```
int const *p_ci;      // Pointer to constant int
int const (*p_ci);   // Pointer to constant int
int *const cp_i;     // Constant pointer to int
int (*const cp_i);   // Constant pointer to int
int volatile vint;     // Volatile integer
```
`const` へのポインターを宣言すると、関数がそのポインターを一切変更できなくなります。

## `restrict`
現在のスコープ内の他のポインターによって同じメモリ位置が参照されていないことを示す、コンパイラへの最適化ヒントです.  
```
void test(int* restrict first, int* restrict second, int* val)
{
    *first += *val;
    *second += *val;
}

int main()
{
    int i = 1, j = 2, k = 3;
    test(&i, &j, &k);

    return 0;
}

// Marking union members restrict tells the compiler that
// only z.x or z.y will be accessed in any scope, which allows
// the compiler to optimize access to the members.
union z 
{
    int* restrict x;
    double* restrict y;
};
```