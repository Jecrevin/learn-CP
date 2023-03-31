OFILES = parse.o add.o print.o

plus: main.o libPlus.so
	g++ -o $@ $< -L. -lPlus -R.

%.o: %.cpp
	g++ -c -fPIC -o $@ $?

libPlus.so: $(OFILES)
	g++ $(OFILES) -fPIC -shared -o libPlus.so

clean:
	rm -f *.so *.o plus *~