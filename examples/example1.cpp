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
	cout<<endl<<parser.getStatusString()<<endl<<parser.getFormattedRequest();
	
	str = string("POST / HTTP/1.0\r\nhost: localhost:80\r\n\r\n");
	parser.setRequest(str);
	returnVal = parser.parse();
	cout<<endl<<parser.getStatusString()<<endl<<parser.getFormattedRequest();
	
	return 0;
}
