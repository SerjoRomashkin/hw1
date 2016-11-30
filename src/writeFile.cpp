#include "writeFile.h"
#include "Player.h"
writeFile::writeFile()
{
    //ctor
}

writeFile::~writeFile()
{
    //dtor
}

void writeFile::writeOutput(Player &p){
ofstream outputFile("Output.txt");
if (!outputFile.is_open())
        {
            cerr << "Error opening file, something went wrong.\nProgram will now exit.\n";
                return -42;
        }
        else
        {
            //if everything was successful with opening the file, lets write a few lines to it.
            outputFile << "We have the following persons in our program :\n";
            outputFile << p.getName() << ", Age : " << p1.getAge() <<endl;
                outputFile.flush();
            //remember to close the file (!!!).
            outputFile.close();
            cout << "Writing to file is complete successfully."<<endl;
        }

}


