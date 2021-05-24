all: szescian.o kwadrat.o prostokat.o prostopadloscian.o pola.a objetosci.a Code2.o Code2

%.o: %.c
	gcc -c $<
	
prostokat.o: prostokat.c
kwadrat.o: kwadrat.c
szescian.o: szescian.c
prostopadloscian.o: prostopadloscian.c
Code2.o: Code2.c

pola.a: kwadrat.o prostokat.o
	ar rs $@ $^
	
objetosci.a: prostopadloscian.o szescian.o
	ar rs $@ $^
	
Code2: Code2.o pola.a objetosci.a
	gcc -o Code2 Code2.o pola.a objetosci.a
