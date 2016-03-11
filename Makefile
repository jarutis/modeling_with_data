PROGNAME = main

# output directories
BIN_DIR = bin
MKDIR = mkdir -p

# collect all sources
SOURCES=$(wildcard *.c)
UTILITIES=$(wildcard ../utilities/*.c)

# compilation params
CFLAGS = -g -Wall -std=gnu99

$(BIN_DIR):
	$(MKDIR) $@

executable: $(SOURCES)
	gcc $(CFLAGS) $< $(UTILITIES) -o $(BIN_DIR)/$(PROGNAME)

directories: $(BIN_DIR)

run: directories executable
	./$(BIN_DIR)/$(PROGNAME) $(PARGS)
