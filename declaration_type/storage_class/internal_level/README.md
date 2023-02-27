# 内部レベル宣言のストレージ クラス指定子
## `auto` ストレージ クラス指定子
自動変数 (ローカルな有効期間を持つ変数) を宣言できます。  
宣言するときに明示的に初期化するか、ブロック内のステートメントの初期値を代入する必要があります。 

## `register` ストレージ クラス指定子
Microsoft 固有の仕様
[参考](https://learn.microsoft.com/ja-jp/cpp/c-language/register-storage-class-specifier?view=msvc-170)

## `static` ストレージ クラス指定子
グローバルな有効期間がありますが、宣言されたブロック内でしか参照できません。  
頻繁に呼び出される関数内の頻度の高い初期化のオーバーヘッドを軽減するのに役立ちます。

## `extern` ストレージ クラス指定子
`extern` を使用して宣言された変数は、別のソース ファイルで定義されている同じ名前の変数への参照となります。  
これは、外部レベル変数の定義を可視化するために使用されます。   
`extern` として宣言された変数自体に記憶域は割り当てられません。これは単なる名前です。
```
// Source1.c

int i = 1;

// Source2. c

#include <stdio.h>

// Refers to the i that is defined in Source1.c:
extern int i;

void func(void);

int main()
{
    // Prints 1:
    printf_s("%d\n", i);
    func();
    return;
}

void func(void)
{
    // Address of global i assigned to pointer variable:
    static int *external_i = &i;

    // This definition of i hides the global i in Source.c:
    int i = 16;

    // Prints 16, 1:
    printf_s("%d\n%d\n", i, *external_i);
}
```