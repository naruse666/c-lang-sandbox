# typedef 宣言
ストレージ クラスとしての typedef による宣言です。  
宣言子は、新しい型になります。 `typedef` 宣言を使用して、既に C で定義されている型や、宣言した型に対して、より短い、またはわかりやすい名前を作成できます。  

Typedef 名は、名前空間を通常の識別子と共有します.プログラムは同じ名前の typedef 名とローカル スコープ識別子を持つことができます。
```
typedef char FlagType;

int main()
{
}

int myproc( int )
{
    int FlagType;
}
```

typedef と同じ名前でローカル スコープの識別子を宣言するとき、あるいは同じスコープまたは内部スコープ内で構造体または共用体のメンバーを宣言するときは、型指定子も指定する必要があります。
```
typedef char FlagType;
const FlagType x;
```

識別子、構造体メンバー、または共用体メンバーに対して `FlagType` 名を再利用するには、次のように型を指定する必要があります。
```
const int FlagType;  /* Type specifier required */

const FlagType;      /* Incomplete specification */

int;  /* Illegal declaration */
```

# 使用例
`WHOLE` は、`WHOLE i;`、`const WHOLE i;` などの変数宣言で使用できるようになりました。 ただし、宣言 `long WHOLE i;` は無効です。
```
typedef int WHOLE; /* Declares WHOLE to be a synonym for int */
```

このステートメントは、3 つのメンバーを持つ構造体の型として `GROUP` を宣言します。 構造体タグ `club` も指定されているため、`typedef` 名 (`GROUP`) またはその構造体タグを宣言で使用できます。 `struct` キーワードはタグで使用する必要があります。`typedef` 名で `struct` キーワードを使用することはできません。
```
typedef struct club
{
    char name[30];
    int size, year;
} GROUP;
```

