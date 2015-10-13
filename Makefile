gmp: gmp.c
	gcc -Wall $< -o $@ -lgmp

clean:
	rm -f gmp
