
compiler:y.tab.c lex.yy.c 
	gcc -g -o Sython  *.c  
y.tab.c:sython.y
	yacc -d sython.y
lex.yy.c:sython.l
	lex sython.l
win: *.c  
	/usr/bin/x86_64-w64-mingw32-gcc-win32 -o SythonWin.exe ${OBJS} -static-libstdc++ -static-libgcc $^
.PHONY:clean
clean:
	rm y.tab.c lex.yy.c compiler
