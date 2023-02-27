# アラインメント (C11)
キャッシュって印象。  
データがそのデータ サイズの倍数であるアドレスに格納されていると、CPU の読み取りと書き込みの効率が向上します。  
通常は、アラインメントについて心配する必要はありません。  

C11 キーワード `_Alignof` を使用して、型または変数の適切なアラインメントを取得したり、 `_Alignas` を使用して、変数またはユーザー定義型のカスタム アラインメントを指定したりします。

## `alignas` と `_Alignas` (C11)
```
alignas(type)
alignas(constant-expression)
_Alignas(type)
_Alignas(constant-expression)
```

## `alignof` と `_Alignof` (C11)
```
alignof(type)
_Alignof(type)
```

