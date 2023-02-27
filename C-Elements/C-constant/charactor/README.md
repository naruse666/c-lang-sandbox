# C 文字定数
表現できる文字セットの 1 文字を単一引用符 ( ' ' ) で囲むことによって作成.
 

# 文字型
単一の文字を含む整数の文字定数の値は整数として解釈される文字の数値.

```
char    schar =  'x';   /* A character constant          */
wchar_t wchar = L'x';   /* A wide-character constant for
                            the same character           */
```
ワイド文字定数は、16 ビット幅.


# エスケープ シーケンス
```
エスケープ シーケンス	表現
\a	                  ベル (警告)
\b	                  バックスペース
\f	                  フォーム フィード
\n	                  改行
\r	                  キャリッジ リターン
\t	                  水平タブ
\v	                  垂直タブ
\'	                  単一引用符
\"	                  二重引用符
\\	                  円記号
\?	                  リテラル疑問符
\ooo	                  8 進表記の ASCII 文字
\xhh	                  16 進表記の ASCII 文字
\xhhhh	                  このエスケープ シーケンスがワイド文字定数または Unicode 文字列リテラルで使用されている場合は、16 進表記の Unicode 文字。

たとえば、WCHAR f = L'\x4e00' または WCHAR b[] = L"The Chinese character for one is \x4e00" のようにします。
```