# Compiler
CC = gcc
CFLAGS = -Wall -Wextra -std=c99

# Targets
TARGET = subtraction
TEST_TARGET = test_subtraction
ARTIFACT = subtraction_program.tar.gz
SOURCES = subtraction.c
HEADERS = subtraction.h
TEST_SOURCES = test_subtraction.c

# Default target
all: build test

# Build the main program
build: $(TARGET)

$(TARGET): $(SOURCES) $(HEADERS)
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCES)

# Build and run tests
test: $(TEST_TARGET)
	./$(TEST_TARGET)

$(TEST_TARGET): $(TEST_SOURCES) $(SOURCES) $(HEADERS)
	$(CC) $(CFLAGS) -o $(TEST_TARGET) $(TEST_SOURCES) $(SOURCES)

# Create deployable artifact
package: build test
	tar -czf $(ARTIFACT) $(TARGET) $(SOURCES) $(HEADERS) $(TEST_SOURCES) Makefile
	@echo "Artifact created: $(ARTIFACT)"
	@echo "Contents:"
	@tar -tzf $(ARTIFACT)

# Clean build artifacts
clean:
	rm -f $(TARGET) $(TEST_TARGET) $(ARTIFACT)

# Install dependencies (simulated)
deps:
	@echo "Installing build dependencies..."
	@echo "gcc version:"
	@gcc --version

.PHONY: all build test package clean deps
