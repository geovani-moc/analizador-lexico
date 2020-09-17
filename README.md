<h1># analizador-lexico</h1>

<h3>Requisitos: </h3>
jAVACC (7.0.5)

<h3>exemplo de compilação:</h3>
java -classpath /endereco/do/javacc.jar javacc Simple1.jj

<p>Para consultar a definição dos tipos de tokens,acessar a especificação do C versao ANSI C89.</p>
<p>Os tokens que são identificados são os seguintes, tal como descritos na especificação:</p>

<p>
1.keyword: aquelas listadas como keywords do ANSI C89</br>
2.identifiers: identificadores, como descrito no manual</br>
3.integer-constant: números inteiros</br>
4.floating-constant: números ponto flutuante</br>
5.character-constant: caractere</br>
6.string-literal: string</br>
7.operators  and  punctuators:  operadores</br>
</p>

<h3>Exemplo de saida:</h3>
<p>
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
</p>