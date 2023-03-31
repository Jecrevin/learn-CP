OFILES = parse.o add.o print.o

plus: main.o libPlus.a
	g++ -o $@ $< -L. -lPlus

libPlus.a: $(OFILES)
	ar rc $@ $?

clean:
	rm -f *.a *.o plus *~