CFLAGS = -Wno-format -Wall -Werror -Wextra -pedantic -std=gnu89

printf: *.c
	@echo "---- ---- ---- ---- ---- ---- ----"
	gcc $(CFLAGS) *.c -o printf -g
	@echo "compilation complete"

clean:
	rm printf
