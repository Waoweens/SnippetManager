#include <cmdline/args.hpp>
#include <boost/program_options.hpp>
#include <iostream>

namespace po = boost::program_options;
po::options_description desc("Allowed options");

ArgsParser::ArgsParser(int argc, char** argv) {	

	desc.add_options()
		("help", "produce help message")
		("input-file", po::value<std::string>(), "set input file")
		("output-file", po::value<std::string>(), "set output file")
		("cat", po::value<std::string>(), "see contents of file")
	;

	po::store(po::parse_command_line(argc, argv, desc), options_);
	po::notify(options_);
}

bool ArgsParser::hasOption(const std::string& option) const {
	return options_.count(option) > 0;
}

std::string ArgsParser::getOption(const std::string& option) const {
	return options_[option].as<std::string>();
}
