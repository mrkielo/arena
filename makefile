files := $(wildcard src/*.cpp)

build:
	g++ $(files) -o arena_app
run:
	./arena_app
