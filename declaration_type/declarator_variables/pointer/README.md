# ポインター宣言
`message` ポインターは、`char` 型の変数を指しています。
```
char *message; /* Declares a pointer variable named message */
```

`pointers` 配列には 10 個の要素があり、各要素は `int` 型の変数へのポインターです。
```
int *pointers[10];  /* Declares an array of pointers */
```

この`pointer`変数は、10 個の要素を持つ配列を指します。 この配列の各要素は `int` 型です。
```
int (*pointer)[10]; /* Declares a pointer to an array of 10 elements */
```

ポインター `x` が別の `int` 値を指すように変更することはできますが、指す値自体を変更することはできません。
```
int const *x;      /* Declares a pointer variable, x,
                      to a constant value */
```                    

変数 `y` は、`int` 値への定数ポインターとして宣言されています。 それが指す値を変更することはできますが、ポインター自体は常に同じ場所、つまり `fixed_object` のアドレスを指す必要があります。 同様に、`z` は定数ポインターですが、プログラムによって値を変更できない `int` を指すことが併せて宣言されています。 `volatile` 指定子により、`z` が指す `const int` の値はプログラムによって変更できませんが、プログラムと同時に実行されているプロセスによって正当に変更できることが指定されます。 `w` の宣言は、指す値がプログラムによって変更できず、ポインターもプログラムによって変更できないことを指定しています。
```
const int some_object = 5 ;
int other_object = 37;
int *const y = &fixed_object;
int volatile *const z = &some_object;
int *const volatile w = &some_object;
```