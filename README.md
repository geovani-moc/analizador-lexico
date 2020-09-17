# analizador-lexico

Requisitos: 
jAVACC (7.0.5)

exemplo de compilação:
java -classpath /endereco/do/javacc.jar javacc Simple1.jj


Para consultar a definição dos tipos de tokens,acessar a especificação do C versao ANSI C89.

Os tokens que são identificados são os seguintes, tal como descritos na especificação:

1.keyword: aquelas listadas como keywords do ANSI C89
2.identifiers: identificadores, como descrito no manual
3.integer-constant: números inteiros
4.floating-constant: números ponto flutuante
5.character-constant: caractere
6.string-literal: string
7.operators  and  punctuators:  operadores

Exemplo de saida:

int
ID f
(
int
ID n
,
int
ID x
,
int
ID z
)
{
int
ID a
;
int
ID b
;
int
ID c
;
int
ID d
;
ID a
=
ID n
-
NUM 1
;
ID b
=
ID f
(
ID b
,
ID c
,
ID d
)
;
return
ID n
*
ID b
*
ID x
*
ID z
;
}
