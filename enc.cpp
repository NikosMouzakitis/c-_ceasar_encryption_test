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
	string cipher;

	myfile.open("plaintext");
	
	if( myfile.is_open() ) {

		while(myfile) {
		
			getline(myfile, tmp);	
			file_read = file_read + tmp;
		}	
	}
	
	cipher = file_read;

	for (int i = 0; i < file_read.length(); i++)
		cipher[i] = file_read[i]+2;			
	
	cout << "cipher text created: " << endl;
	cout << cipher << endl;
	

	//create a new file storing the ciphertext.
	std::ofstream sfile("ciphertext");
	sfile << cipher << endl;
	sfile.close();
	return 0;

}
