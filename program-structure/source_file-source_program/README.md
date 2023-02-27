# ソース ファイルとソース プログラム
C の "ソース プログラム" は、ディレクティブ、プラグマ、宣言、定義、ステートメント ブロック、および関数のコレクション。  
ソース ファイルに実行可能なステートメントを含める必要はなく、インクルードとかする。

# プリプロセッサへのディレクティブ
`#include`などのこと。
```
#define	#endif	#ifdef	  #line
#elif	  #error	#ifndef	  #pragma
#else	  #if	    #include	#undef
```

# C プラグマ
MS固有の仕様なので割愛。
[C プラグマ](https://learn.microsoft.com/ja-jp/cpp/c-language/c-pragmas?view=msvc-170)

# C 宣言と定義
以下のコードでは、 `var`, `val`は後続のfind関数, count関数では使用できるが、main関数ではアクセス不可。
```
int main() {}

int var = 0;
double val[MAXVAL];
char find( fileptr ) {}
int count( double f ) {}
```
 
# ブロック
中括弧`{}`で囲まれたやつのこと。

# サンプル プログラム
静的変数および外部変数の u と v は自動的に 0 に初期化され, a、b、u、および v にのみ宣言時に意味のある値が含まれます。
```
/*****************************************************************
                    FILE1.C - main function
*****************************************************************/

#define ONE     1
#define TWO     2
#define THREE   3
#include <stdio.h>

int a = 1;                       // Defining declarations
int b = 2;                       //  of external variables

extern int max( int a, int b );  // Function prototype

int main()                       // Function definition
{                                //  for main function
    int c;                       // Definitions for
    int d;                       //  two uninitialized
                                 //  local variables

    extern int u;                // Referencing declaration
                                 //  of external variable
                                 //  defined elsewhere
    static int v;                // Definition of variable
                                 //  with continuous lifetime

    int w = ONE, x = TWO, y = THREE;
    int z = 0;

    z = max( x, y );             // Executable statements
    w = max( z, w );
    printf_s( "%d %d\n", z, w );
    return 0;
}

/****************************************************************
            FILE2.C - definition of max function
****************************************************************/

int max( int a, int b )          // Note formal parameters are
                                 //  included in function header
{
    if( a > b )
        return( a );
    else
        return( b );
}
```