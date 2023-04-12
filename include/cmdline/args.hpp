#include <boost/program_options.hpp>

extern boost::program_options::options_description desc;

class ArgsParser {
	public:
		ArgsParser(int argc, char** argv);

		bool hasOption(const std::string& option) const;
		std::string getOption(const std::string& option) const;
		
	private:
		boost::program_options::variables_map options_;

};