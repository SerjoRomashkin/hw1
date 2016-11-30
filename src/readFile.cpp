#include "readFile.h"
#include <stdlib.h> //atoi.
#include "Player.h"

readFile::readFile()
{
    //ctor
    cout<<"\nNow Reading from File"<< endl;

}

readFile::~readFile()
{
    //dtor
    cout<<"\nReading from File Finished"<< endl
}


void readFile::readCreation(){
    ifstream inputFile("creation.txt");
    readLineFromFile(inputFile);
}

void readFile::readSimulation(){
    ifstream inputFile("simulation.txt");
    readLineFromFile(inputFile);
}


void readLineFromFile(ifstream& inFile)
{
    char buffer[64];
    int i = 0;

    while(buffer[i]!='P') //skip the comments until Player info
    {
       inFile.getline(buffer,64,'\n');
        i++;
    }
    //if there was P - create a player
    Player p;
    //read ID - set ID
    inFile.getline(buffer,64,',');
    p.SetplayerID(atoi(buffer));
    cout << buffer << ", ";
    //read Name - set Name
    inFile.getline(buffer,64,',');
    p.SetplayerName(buffer);
    cout << buffer << ", ";
    //read Wins - set Wins
    inFile.getline(buffer,64,',');
    p.SetplayerWins(buffer);
    cout << buffer << ", ";
    //read Defeats - set Defeats
    inFile.getline(buffer,64,',');
    p.SetplayerDefeats(buffer);
    cout << buffer << ", ";
    //read pos x - set position x
    inFile.getline(buffer,64,':');
    p.SetplayerWins(buffer);
    cout << buffer << ", ";
    //read pos y - set position y
    inFile.getline(buffer,64,'\n');
    p.SetplayerWins(buffer);
    cout << buffer << ", ";

   i=0;
    while(buffer[i]!='C') //skip the comments until Card info
    {
       inFile.getline(buffer,64,'\n');
        i++;
    }
    //if there was C - create a card in players deck
    p.;
    //read ID - set ID
    inFile.getline(buffer,64,',');
    p.SetplayerID(atoi(buffer));
    cout << buffer << ", ";
    //read Name - set Name
    inFile.getline(buffer,64,',');
    p.SetplayerName(buffer);
    cout << buffer << ", ";
    //read Wins - set Wins
    inFile.getline(buffer,64,',');
    p.SetplayerWins(buffer);
    cout << buffer << ", ";
    //read Defeats - set Defeats
    inFile.getline(buffer,64,',');
    p.SetplayerDefeats(buffer);
    cout << buffer << ", ";
    //read pos x - set position x
    inFile.getline(buffer,64,':');
    p.SetplayerWins(buffer);
    cout << buffer << ", ";
    //read pos y - set position y
    inFile.getline(buffer,64,'\n');
    p.SetplayerWins(buffer);
    cout << buffer << ", ";


    inFile.getline(buffer,64,':');
    inFile.getline(buffer,64,'\n');
    p.setAge((atoi(buffer)));
    p.printMe();
}
