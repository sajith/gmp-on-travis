gmp: gmp.c
	gcc -Wall -lgmp $< -o $@ 

clean:
	rm -f gmp
