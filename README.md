<h1># analizador-lexico</h1>

<h3>Requisitos: </h3>
JAVACC (7.0.5)

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
int</br>
ID f</br>
(</br>
int</br>
ID n</br>
,</br>
int</br>
ID x</br>
,</br>
int</br>
ID z</br>
)</br>
{</br>
int</br>
ID a</br>
;</br>
int</br>
ID b</br>
;</br>
int</br>
ID c</br>
;</br>
int</br>
ID d</br>
;</br>
ID a</br>
=</br>
ID n</br>
-</br>
NUM 1</br>
;</br>
ID b</br>
=</br>
ID f</br>
(</br>
ID b</br>
,</br>
ID c</br>
,</br>
ID d</br>
)</br>
;</br>
return</br>
ID n</br>
*</br>
ID b</br>
*</br>
ID x</br>
*</br>
ID z</br>
;</br>
}</br>
</p>