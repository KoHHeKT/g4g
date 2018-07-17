CFLAGS  = -std=c99
CFLAGS += -g
CFLAGS += -Wall
CFLAGS += -Wextra
CFLAGS += -pedantic
CFLAGS += -Werror

VFLAGS  = --quiet
VFLAGS += --tool=memcheck
VFLAGS += --leak-check=full
VFLAGS += --error-exitcode=1

test: tests.out
	@./tests.out

memcheck: tests.out
	@valgrind $(VFLAGS) ./tests.out
	@echo "Memory check passed"

clean:
	rm -rf *.o *.out *.out.dSYM

tests.out: test/{TEST_TEMPLATE_FILE} src/{SOLUTION_CODE_FILE} src/{SOLUTION_HEADER_FILE}
	@echo Compiling $@
	@$(CC) $(CFLAGS) src/{SOLUTION_CODE_FILE} test/vendor/unity.c test/{TEST_TEMPLATE_FILE} -o tests.out
