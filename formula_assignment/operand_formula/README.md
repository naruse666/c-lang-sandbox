# オペランドおよび式
演算子の処理対象のエンティティのこと。  
特に難しいことは言っていないので初めて登場するもののみ記載。
- 値の計算
- オブジェクトまたは関数の指定
- 副作用の生成

## 汎用選択 (C11)
`_Generic` キーワードを使用して、コンパイル時に引数の型に基づいて式を選択するコードを記述します。  

たとえば、式 ```_Generic(42, int: "integer", char: "character", default: "unknown"); ```では `42` の型を評価し、リスト内で一致する型 `int` を検索します。 これを検出し、`"integer"` を返します。

### 例
`_Generic` を使用する 1 つの方法は、マクロです。 `<tgmath.h>` ヘッダー ファイルでは `_Generic` を使用して、引数の型に応じた適切な数値演算関数が呼び出されます。
```
// Compile with /std:c11

#include <stdio.h>

/* Get a type name string for the argument x */
#define TYPE_NAME(X) _Generic((X), \
      int: "int", \
      char: "char", \
      double: "double", \
      default: "unknown")

int main()
{
    printf("Type name: %s\n", TYPE_NAME(42.42));

    // The following would result in a compile error because 
    // 42.4 is a double, doesn't match anything in the list, 
    // and there is no default.
    // _Generic(42.4, int: "integer", char: "character"));
}

/* Output:
Type name: double
*/
```

### 必要条件
[/std:c11](https://learn.microsoft.com/ja-jp/cpp/build/reference/std-specify-language-standard-version?view=msvc-170)を使ってコンパイルします。

## 副作用
この例では、変更された `x` の値は予測できません。 添字の値は `i` の新規または古い値である可能性があります。 結果は、コンパイラや最適化レベルが異なると変わります。
```
x[i] = i++;
```
