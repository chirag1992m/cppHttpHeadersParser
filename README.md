Given a string(std::string) and parses it stores the different headers given in a map of string (header name) and string (header value).
It also stores the http version, method, machine name and the relative URI.

It validates the requests and returns the corresponding status of the request,
400 (Bad Request)
501 (Not Implemented)
200 (OK)

Just copy the files in your project root folder and incluse it using: #include "/path/to/file/http_requests_parser.hpp"

The puclic functions are:
1. constructor() - Make a new and empty object of type HttpRequestsParser

2. constructor(std::string) - Make a new object of type HttpRequestsParser and set the string that has to be parsed.

3. void setRequest() - set the string to be parsed.

4. int parse() - after setting the string, calling this function will start the parsing of the string and separate all the header and its values.
		The return values are:
			400 (Bad Request)
			501 (Not Implemented)
			200 (OK)

5. 	std::string getFormattedRequest();
	std::string getHostName();
	std::string getStatusString();
	std::string getVersionString();
	std::string getMethodName();
	std::string getFullURL();

	get Methods to get the required part of http request.
