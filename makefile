stringlib: stringlib.c
	gcc -o stringlib.c stringlib.out

clean:
	rm *~

run:
	./stringlib.out
