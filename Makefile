source = main.cpp
target = main

compile_and_run: compile run

compile:
	g++ $(source) -Wall -Werror -o $(target)

run: 
	./$(target)
