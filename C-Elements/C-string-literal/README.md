# C 文字列リテラル
二重引用符 ( " " ) で囲まれたソース文字セットの文字のシーケンス.
```char *amessage = "This is a string literal.";```

# 文字列リテラルの型
文字列リテラルは、char の型配列 (つまり、char[ ] ) を持ちます (ワイド文字列は、wchar_t の型配列 (つまり、wchar_t[ ]) を持ちます).

# 文字列リテラルの連結
これは1行の文字列になる。
```
"Long strings can be bro\
ken into two or more pieces."
```

初期化された文字列ポインターを使うと1つの文字列として扱う。
```
char *string = "This is the first half of the string, "
               "this is the second half";

printf_s( "%s" , string ) ;
```