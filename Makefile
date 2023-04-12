all: clean build

build:
	@echo -e "\033[33m\033[1mBuilding...\033[0m"
	cmake -S . -B build
	cmake --build build
	@echo -e "\033[32m\033[1mDone!\033[0m"

clean:
	rm -rf build