# 基本型のストレージ
## 基本型のサイズ
```
種類	                              記憶域
char, unsigned char, signed char	  1 バイト
short, unsigned short	              2 バイト
int, unsigned int	                  4 バイト
long, unsigned long	                4 バイト
long long, unsigned long long      	8 バイト
float	                              4 バイト
double	                            8 バイト
long double	                        8 バイト
```

## char 型
`char` 型は、表現できる文字セットのメンバーの整数値を格納するために使用されます。 この整数値は、特定の文字に対応する `ASCII` コードです。

## int 型
ターゲット環境によって、 `int` 型は `short int` または `long int` 型のいずれかに相当し、 `unsigned int` 型は `unsigned short` または `unsigned long` 型のいずれかに相当します。  
`int` 型はすべて、特に指定しない限り、符号付きの値を表します。

## float 型
浮動小数点数が IEEE (米国電気電子技術者協会) 形式を使用します。  

### 浮動小数点型
```
種類	   有効桁数	  バイト数
float	   6 - 7	    4
double	 15 - 16	  8
```