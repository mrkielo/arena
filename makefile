files := $(wildcard src/*.cpp)

arena:
	g++ $(files) -o ./build/arena_app
run:
	./build/arena_app
