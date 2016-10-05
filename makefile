stringlib: stringlib.c
	gcc stringy.c -o stringy.out

clean:
	rm *~

run:
	./stringy.out
