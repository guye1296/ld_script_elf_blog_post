CC=gcc

sample: sample.c rwdata.ld
	mkdir -p build
	$(CC) -T rwdata.ld sample.c -o build/sample  	

clean:
	rm -r build/
