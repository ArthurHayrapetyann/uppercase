export EXE := bin/mec_poq
export C_FILES := $(wildcard src/*.cpp)
export O_FILES := $(patsubst src/%.cpp, src/%.o, $(C_FILES))

$(EXE) : $(O_FILES)
	g++ $^ -o $@
	rm src/*.o
src/%.o : src/%.cpp
	g++ -c $^ -o $@
clean :
	rm output.txt $(EXE)
