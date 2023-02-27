# Cのトークン
コンパイラによって認識される基本要素
## 構文
```
token:
 keyword
 identifier
 constant
 string-literal
 operator
 punctuator
```

## 空白文字
スペース、タブ、改行、復帰、フォーム フィード、垂直タブは空白文字として認識される。
コメントも同様。

## コメント
基本`/* hogehoge */`のブロックコメント.  
`// This is a valid comment`はMSのコンパイラがサポート。