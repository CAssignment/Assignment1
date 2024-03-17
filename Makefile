TARGET=A2Q7c

CSRCS= $(TARGET).c
CSRCS+=

COBJS=$(CSRCS:.C=.O)

CC=gcc
CFLAGS=
LDFLAGS=

#Rule 1 - for linking
$(TARGET): $(COBJS)
	$(CC) $(LDFLAGS) -o $@ $^

#Rule 2 - for compiling
%.o:%.c
	$(CC) $(CFLAGS) -c $<

# Rule 3 - for runing
run: 
	./$(TARGET)

# Rule 4 - for cleaning
clean:
	rm $(TARGET) $(COBJS)

.phony: run clean

