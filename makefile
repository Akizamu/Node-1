# Name of the executable
DEPS = myprogram

# Compile the program
compile: main.cpp linkedlist.h node.h
	clear
	g++ main.cpp linkedlist.h node.h -o $(DEPS)

# Run the program
run: compile
	./$(DEPS)

# Clean up executable
clean:
	rm -f $(DEPS)
