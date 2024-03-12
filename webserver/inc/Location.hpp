#ifndef LOCATION_HPP
# define LOCATION_HPP

#include "libraries.hpp"

class Location
{
	public:
		Location();
		Location(const std::string &data);
		~Location();

		void defaultConfig();
		void parseConfig(const std::string &config);
		void printData() const;

		/* void setAcceptedMethod(const std::string &method);
		void setLocation(const std::string &path);
		void setRoot(const std::string &rootPath);
		void setIndex(const std::string &indexPath);
		void setDirectoryListing(const bool &value);
		void setCgiExtension(const std::string &extension, const std::string &executable);
		void setReturn(const int &httpCode, const std::string &redir); */

		bool isAcceptedMethod(const std::string &method) const;
		std::string getLocation() const;
		std::string getRoot() const;
		std::set<std::string> getIndex() const;
		bool getDirectoryListing() const;
		std::map<std::string, std::string> getCgiExtension() const;
		std::map<int, std::string> getReturn() const;


	private:
		std::string							_location;
		std::set<std::string>				_acceptedMethods;
		std::string							_root;
		std::set<std::string>				_index;
		bool								_directoryListing;
		std::map<std::string, std::string>	_cgiExtension;
		std::map<int, std::string>			_return;
};

#endif