TARGET: exe
exe:main.o mylibmath.a
	gcc  main.o -o exe -L . mylibmath.a -lm
mylibmath.a:trig_math/trig_math.o common_math/common_math.o complex_math/complex_math.o
	ar rs mylibmath.a common_math/common_math.o complex_math/complex_math.o trig_math/trig_math.o
common_math.o:common_math/common_math.c
	gcc  -c -I common_math common_math/common_math.c -o common_math/common_math.o
complex_math.o:complex_math/complex_math.c
	gcc  -c -I complex_math complex_math/complex_math.c -o complex_math/complex_math.o
trig_math.o:trig_math/trig_math.c
	gcc  -c -I trig_math trig_math/trig_math.c -o trig_math/trig_math.o
main.o:main.c
	gcc  -c -I common_math -I complex_math -I trig_math main.c -o main.o
clean:
	rm common_math/common_math.o
	rm complex_math/complex_math.o
	rm trig_math/trig_math.o
	rm main.o
	rm mylibmath.a
	rm exe
