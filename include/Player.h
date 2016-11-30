#ifndef PLAYER_H
#define PLAYER_H


class Player
{
    public:
        Player();
        virtual ~Player();

        struct cardsDeck Get[]() { return []; }
        void Set[](struct cardsDeck val) { [] = val; }
        char* GetplayerName() { return playerName; }
        void SetplayerName(char* val) { playerName = val; }
        int GetplayerId() { return playerId; }
        void SetplayerId(int val) { playerId = val; }
        int GetplayerWins() { return playerWins; }
        void SetplayerWins(int val) { playerWins = val; }
        int GetplayerDefeats() { return playerDefeats; }
        void SetplayerDefeats(int val) { playerDefeats = val; }
        int GetplayerMovesleft() { return playerMovesleft; }
        void SetplayerMovesleft(int val) { playerMovesleft = val; }
        void populateDeck() {for(int i=0;i<5;i++){cardsDeck[i]=Card}}

    protected:

    private:
        struct cardsDeck [5];
        char* playerName;
        int playerId;
        int playerWins;
        int playerDefeats;
        int playerMovesleft;
};

#endif // PLAYER_H
