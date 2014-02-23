#include <iostream>
using namespace std;

bool hasDuplicates( char* str );

int main(int argc, char* argv[]) {
  // your code goes here
  cout << "\"" << argv[argc-1] << "\"" << ( hasDuplicates( argv[argc-1] ) ? " Has Duplicates" : " Has No Duplicates" ) << endl;
  return 0;
}

bool hasDuplicates(char* str) {
  bool * ascii = new bool[255];
  for( int i = 0; i < 255; i++ ) {
    ascii[i] = false;
  }
  while( *str != '\0' ) {
    if( ascii[int(*str)] ) return true;
    else ascii[ int(*str) ] = true;
    str++;
  }
  return false;

}
