# マクロキャッチアップ
インラインで展開されるからアドレスとかない。型制限がない引数を取れる。  
1行で完結させるが`\`で複数行かける。  
セミコロンはつけない方がいい。

## `#`, `##`演算子
`#`は引数の値が文字列になる。(仮引数と同じ名前じゃないとダメ)  
```
#define MACRO_A(a) a
int x = MACRO_A(1 + 2); // int x = 1 + 2;
#define MACRO_B(b) # b
char * y = MACRO_B(1 + 2); // char * y = "1 + 2";
```

`##`は以下の`value`と仮引数`a`に対応する`1`が連結されて、`value1`となる。
```
#define MACRO_C(a) value ## a  // ## a がないとvalue以外
int main(){
  int value1, x; 
  x = MACRO_C(1); // x = value1;
  printf("%i\n", x);
}
```

## 基本的な
```
#define VERSION 1.1
#undef VERSION
```

## 条件
```
#if
#elif
#else
#endif

-----

#ifdef
#ifndef
```

### definedのマクロ
```
__DATE__
ソースがコンパイルされた日付で、Mmm dd yyyyの形式を持つ文字列です。月の名前はasctime関数でつくられるものと同じになります。また、ddが10より小さい時は、最初の文字が空白で埋められます。

__TIME__
ソースファイルがコンパイルされた時刻を表します。形式はhh:mm:ssの文字列となります。これはasctime関数で生成される時刻の形式と同じです。

__FILE__
ソースファイル名を表す文字列となります。

__LINE__
行番号を表す整数定数となります。文字列ではないことに注意してください。

__FILE__で表されるソースファイル名と__LINE__で表される行番号は、#line前処理指令を用いて変更することができます。

__STDC__
C言語の規格に合致している処理系であるということを示す整数定数で、値は1です。

__STDC_HOSTED__
処理系が規格に合致しているホスト処理系であることを示す整数定数で、値は1です。規格に合致していなければ値は0になります。

__STDC_VERSION__
規格のバージョンを表す整数定数で、値は199901Lです。
```
