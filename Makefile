gmp: gmp.c
	$(CC) -Wall $< -o $@ -lgmp

clean:
	rm -f gmp
