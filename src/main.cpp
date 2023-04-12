#include <cmdline/args.hpp>
#include <iostream>

namespace po = boost::program_options;

int main(int argc, char** argv) {
	ArgsParser args(argc, argv);

	std::cout << desc << std::endl;
}