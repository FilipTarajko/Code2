all: szescian.o kwadrat.o prostokat.o prostopadloscian.o Code2

.c.o:
	gcc -c $<

prostopadloscian.o: prostopadloscian.c
prostokat.o: prostokat.c
kwadrat.o: kwadrat.c
szescian.o: szescian.c
Code2: Code2.c szescian.o kwadrat.o prostokat.o prostopadloscian.o
	gcc -g -Wall Code2.c kwadrat.o szescian.o prostokat.o prostopadloscian.o -o Code2
