all:
	java -classpath /$${HOME}/javacc/javacc-7.0.5/bootstrap/javacc.jar javacc main.jj

teste:
	javac *.java
	java Clang < TESTES/teste1.c 1>out 2>err
	java Clang < TESTES/caractere.in 1>>out 2>>err
	java Clang < TESTES/float.in 1>>out 2>>err
	java Clang < TESTES/identificadores.in 1>>out 2>>err
	java Clang < TESTES/inteiros.in 1>>out 2>>err
	java Clang < TESTES/keywords.in 1>>out 2>>err
	java Clang < TESTES/operadores.in 1>>out 2>>err

t1:
	javac *.java
	java Clang < TESTES/teste0.c 1>out 2>err
t2:
	javac *.java
	java Clang < TESTES/teste2.c 1>out 2>err
t3:
	javac *.java
	java Clang < TESTES/teste3.c 1>out 2>err
t4:
	javac *.java
	java Clang < TESTES/teste4.c 1>out 2>err
t5:
	javac *.java
	java Clang < TESTES/teste5.c 1>out 2>err
