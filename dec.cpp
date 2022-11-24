#include <iostream>
#include <fstream>
#include <string>


using namespace std;
//implementation of simple Ceasar's cipher encryption.
//

int main()
{
	std::ifstream myfile;
	string file_read(""), tmp;
	string decipher;

	myfile.open("ciphertext");
	
	if( myfile.is_open() ) {

		while(myfile) {
		
			getline(myfile, tmp);	
			file_read = file_read + tmp;
		}	
	}
	
	decipher = file_read;

	for (int i = 0; i < file_read.length(); i++)
		decipher[i] = file_read[i]-2;			
	
	cout << "deciphered text created: " << endl;
	cout << decipher << endl;
	
	return 0;

}
