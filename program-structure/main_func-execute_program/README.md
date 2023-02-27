# `main` 関数とプログラム実行
main関数は、
- inline として宣言することはできません。
- static として宣言することはできません。
- そのアドレスを取得することはできません。
- プログラムから呼び出すことはできません。

# `main` 関数シグネチャ
mainは下のいずれかで宣言可能。
```
int main( void );
int main( int argc, char *argv[ ] );
int main( int argc, char *argv[ ], char *envp[ ] );
```


MS固有で`wmain`とかもある。

# 引数の説明
`argc`はコマンドラインから渡される引数の数。  

`argv`はnull で終わる文字列へのポインターの配列

# C のコマンド ライン処理のカスタマイズ
引数を受け取らない場合, `noarg.obj` ファイルを`/link` コンパイラ オプションまたは `LINK` コマンド ラインに含めます。