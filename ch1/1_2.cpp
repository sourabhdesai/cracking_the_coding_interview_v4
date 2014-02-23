#include <iostream>
using namespace std;

// Problem: Write code to reverse a C-Style String (C-String means that “abcd” is represented as five characters, including the null character )

void reverse(char * str);

int main( int argc, char* argv[] ) {
    char * str = argv[argc-1];
    reverse(str);
    cout << str << endl;
    return 0;
}

void reverse( char * str ) {
  char * end = str;
  while( *end != '\0' )
    end++;
  end--;
  while( str != end ) {
    char temp = *str;
    *str = *end;
    *end = temp;
    str++;
    end--;
  }
}


