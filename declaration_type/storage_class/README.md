# C ストレージ クラス
## 構文
```
storage-class-specifier:
 auto
 register
 static
 extern
 typedef
```

各ストレージ クラス指定子の厳密な意味は 2 つの要因に左右されます。
- 宣言が現れるのが、外部レベルか内部レベルか
- 宣言された項目が、変数または関数であるかどうか

# 外部レベル宣言のストレージ クラス指定子
```
外部レベルの変数宣言は、変数の定義 ("宣言の定義")、または別の場所で定義された変数の参照 ("宣言の参照") です。
```

### 例
```
/******************************************************************
                      SOURCE FILE ONE
*******************************************************************/
#include <stdio.h>

extern int i;                // Reference to i, defined below
void next( void );           // Function prototype

int main()
{
    i++;
    printf_s( "%d\n", i );   // i equals 4
    next();
}

int i = 3;                  // Definition of i

void next( void )
{
    i++;
    printf_s( "%d\n", i );  // i equals 5
    other();
}

/******************************************************************
                      SOURCE FILE TWO
*******************************************************************/
#include <stdio.h>

extern int i;              // Reference to i in
                           // first source file
void other( void )
{
    i++;
    printf_s( "%d\n", i ); // i equals 6
}
```