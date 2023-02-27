# 単純変数の宣言
変数名と型を指定します。
```
int x, y;        /* Declares two simple variables of type int */
int const z = 1; /* Declares a constant value of type int */
```

# C での列挙体の宣言
名前付き整数の識別子のセットが定義されます。
```
enum identifier
{
    // enumerator-list
}
```
- 列挙セットには重複する定数値を含めることができます。 たとえば、同じセット内の異なる 2 つの識別子 (null と zero のようなメンバー) に値 0 を関連付けることができます。
- 列挙リストの識別子は、参照範囲が同じである同一スコープ内の他の識別子と異なっている必要があります。 これには、他の列挙リストの通常の変数名や識別子が含まれます。
- 列挙タグは通常のスコープ規則に従います。 参照範囲が同じである他の列挙体タグ、構造体タグ、共用体タグと異なる必要があります。

### 例
既定では、値 0 は saturday に関連付けられます。 ここでは、識別子 sunday を明示的に 0 に設定しています。 既定では、その他の識別子には値 1 ～ 5 が割り当てられます。
```
enum DAY            /* Defines an enumeration type    */
{
    saturday,       /* Names day and declares a       */
    sunday = 0,     /* variable named workday with    */
    monday,         /* that type                      */
    tuesday,
    wednesday,      /* wednesday is associated with 3 */
    thursday,
    friday
} workday;
```

DAY セットの値を today 変数に割り当てます。
```enum DAY today = wednesday;```

列挙データ型の変数に整数値を明示的に割り当てるため、型キャストを使用します。
```workday = ( enum DAY ) ( day_value - 1 );```