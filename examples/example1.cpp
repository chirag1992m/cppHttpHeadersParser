#include <iostream>
#include "../http_requests_parser.hpp"
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
	HttpRequestsParser parser;
	
	string str = string("Hello wassup!");
	parser.setRequest(str);
	int returnVal = parser.parse();
	cout<<parser.getStatusString()<<endl;
	
	str = string("POST / HTTP/1.0\r\n\r\n");
	parser.setRequest(str);
	returnVal = parser.parse();
	cout<<endl<<parser.getStatusString()<<endl;
	
	str = string("POST / HTTP/1.0\r\nhost: localhost\r\n\r\n");
	parser.setRequest(str);
	returnVal = parser.parse();
	cout<<endl<<parser.getStatusString()<<endl;
	
	return 0;
}
