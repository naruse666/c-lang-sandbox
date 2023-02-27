# 構造体宣言
"構造体宣言" では、型に名前を付け、異なる型を持つことのできる変数値のシーケンスを指定します。
  
構造体型の宣言では、構造体の領域は確保されません。  
入れ子も可能。
```
struct a
{
    int x;
    struct b
    {
      int y;
    } var2;
} var1;

struct a var3;
struct b var4;
```

## 使用例
```
struct employee   /* Defines a structure variable named temp */
{
    char name[20];
    int id;
    long class;
} temp;

struct employee student, faculty, staff;
```

多くの場合、埋め込み構造体は無名です。
```
struct somestruct
{
    struct    /* Anonymous structure */
    {
        int x, y;
    } point;
    int type;
} w;
```

# C ビット フィールド
構造体宣言子は、"ビット フィールド" と呼ばれる指定されたビット数にすることもできます。その長さは、コロンによってフィールド名の宣言子から設定されます。
```
short a:17;        /* Illegal! */
int long y:33;     /* Illegal! */
```

次の例では、screen という名前の構造体の 2 次元配列を定義します。
```
struct
{
    unsigned short icon : 8;
    unsigned short color : 4;
    unsigned short underline : 1;
    unsigned short blink : 1;
} screen[25][80];
```