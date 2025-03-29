CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -Iheaders
SOURCES = main.c helpers/style_check.c
OBJECTS = main.o helpers/style_check.o
EXECUTABLE = code_analysis_tool

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
