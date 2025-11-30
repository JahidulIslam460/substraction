# Compiler
CC = gcc
CFLAGS = -Wall -Wextra -std=c99

# Targets
TARGET = subtraction
TEST_TARGET = test_subtraction
ARTIFACT = subtraction_program.tar.gz

# Default target
all: build test

# Build the main program
build: $(TARGET)

$(TARGET):
	$(CC) $(CFLAGS) -o $(TARGET) subtraction.c

# Build and run tests
test: $(TEST_TARGET)
	./$(TEST_TARGET)

$(TEST_TARGET):
	$(CC) $(CFLAGS) -o $(TEST_TARGET) test_subtraction.c subtraction.c

# Create deployable artifact
package: build test
	tar -czf $(ARTIFACT) $(TARGET) subtraction.c subtraction.h test_subtraction.c Makefile
	@echo "Artifact created: $(ARTIFACT)"

# Clean build artifacts
clean:
	rm -f $(TARGET) $(TEST_TARGET) $(ARTIFACT)

.PHONY: all build test package clean

