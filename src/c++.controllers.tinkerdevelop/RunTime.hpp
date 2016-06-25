#ifndef RunTime_hpp_
#define RunTime_hpp_

#include "MouseController.cpp"
#include <vector>

class RunTime{
	
	private:
	
		std::vector<std::string> loadScript(std::string route_file);
		int validateScript(std::vector <std::string> lineasScript);
	
	public:
		
		RunTime();
		~RunTime();
		int executeScript(std::string route_file);
		
	
	};

#endif
