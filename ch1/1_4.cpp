#include <iostream>
using namespace std;

/**
 *Problem:
Write a method to decide if two strings are anagrams or not
 */

bool areAnagrams( char * a, char * b );

int main( int argc, char* argv[] ) {
    cout << "\"" << argv[argc-2] << "\"" << " and " << "\"" << argv[argc-1] << "\"" << ( areAnagrams( argv[argc-2], argv[argc-1] ) ? " Are Anagrams" : " Are not Anagrams" ) << endl;
    return 0;
}

bool areAnagrams( char * a, char * b ) {
  int len = strlen(b);
  if( a[len] != '\0' ) return false; // Anagrams must be of same length
  for( int i = 0; i < len/2; i++ ) {
    if( a[i] != b[len - 1 - i] )
      return false;
  }

  return true;
}


