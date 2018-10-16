CC=gcc
CFLAGS=-Wall
OUTPUT=myapp
OBJS=func1.o func2.o myapp.o

$(OUTPUT): $(OBJS)
	$(CC) -o $(OUTPUT) $(OBJS) $(CFLAGS)

%.o: %.c %.h
	$(CC) -o $@ $< -c $(CFLAGS)

clean:
	rm -f $(OUTPUT) $(OBJS)


