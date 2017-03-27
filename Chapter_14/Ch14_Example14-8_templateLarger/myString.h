//Header file myString.h

#ifndef H_myString
#define H_myString

#include <iostream>

using namespace std;

class newString
{
	   //overload the stream insertion and extraction operators
    friend ostream& operator << (ostream&, const newString&);
    friend istream& operator >> (istream&, newString&);

public:
    const newString& operator=(const newString&); 
		//overload the assignment operator
    newString(const char *); 
 		//constructor; conversion from the char string
    newString();  
 		//default constructor to initialize the string to null
    newString(const newString& rightStr); 
 		//copy constructor
    ~newString(); 
 		//destructor

    char &operator[] (int);  
    const char &operator[](int) const;

	  	//overload the relational operators
    bool operator==(const newString&) const;
    bool operator!=(const newString&) const;
    bool operator<=(const newString&) const;
    bool operator<(const newString&) const;
    bool operator>=(const newString&) const;
    bool operator>(const newString&) const;

private:
    char *strPtr;  //pointer to the char array 
    		       //that holds the string
    int strLength;   //data member to store the length 
 				     //of the string
};


#endif 
