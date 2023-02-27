# C 識別子
キーワードではなく、`return`や`main, printf`などがこれにあたる。

## 構文
```
identifier:
 nondigit
 identifier nondigit
 identifier digit

nondigit: 次のいずれか
 _ a b c d e f g h i j k l m n o p q r s t u v w x y z
 A B C D E F G H I J K L M N O P Q R S T U V W X Y Z

digit: 次のいずれか
 0 1 2 3 4 5 6 7 8 9
```

## マルチバイト文字とワイド文字
文字定数の型は`char`, ワイド文字は`wchar_t`.  
`L"hello"`は型 `wchar_t` の 6 つの整数の配列になる。
```
{L'h', L'e', L'l', L'l', L'o', 0}
```

## トライグラフ
変換される。gcc --versionの結果で`clang version 11.0.0`では解釈されなかった。
```
トライグラフ	区切り文字
??=	            #
??(		          [
??/		          \
??)		          ]
??'		          ^
??<		          {
??!		          |
??>		          }
??-		          ~
```