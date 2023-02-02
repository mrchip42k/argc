all:
	gcc main.c -o argc

clean:
	rm -rf argc

.PHONY: all clean
