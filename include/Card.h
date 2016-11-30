#ifndef CARD_H
#define CARD_H


class Card
{
    public:
        Card();
        virtual ~Card();

        void Card::SetcardName  ()  (char* name)   {this.cardName = name;}
        void Card::SetcardValue ()  (int value)    {this.cardValue = value;}
        void Card::SetcardColor ()  (enum color)   {this.cardColor = color;}

        char*   Card::GetcardName   () {return this.cardName;}
        int     Card::GetcardValue  () {return this.cardValue;}
        enum    Card::GetcardColor  () {return this.cardColor;}

    protected:

    private:
        char* cardName;
        int cardValue;
        enum cardColor { Red, Green, Blue, Grey ,Orange ,Purple };
        switch(r)
                {
                case Red    : std::cout << "Red\n";     break;
                case Green  : std::cout << "Green\n";   break;
                case Blue   : std::cout << "Blue\n";    break;
                case Grey   : std::cout << "Grey\n";    break;
                case Orange : std::cout << "Orange\n";  break;
                case Purple : std::cout << "Purple\n";  break;
                }


};

#endif // CARD_H
