#include "Player.h"

Player::Player(name,id,deck)
{
    //ctor
    cout<<"\nNow Creating : "<< GetplayerName() <<" ID: "<< GetplayerId() << endl;

}

Player::~Player()
{
    //dtor
    cout<<"\nNow destroying : "<< GetplayerName() <<" ID: "<< GetplayerId() << endl;
}


void Player::printMe()
{
	cout << "Player: " << GetplayerName() <<" ID: "<< GetplayerId() << endl;

}


