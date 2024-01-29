#ifndef PLAYER_H
#define Player_H


class Player
{
    public:
        Player();

        void CallInput();
        void ResetToSafety();
        int XAxis(); //declaramos publicas 2 dunciones d
        int YAxis();
        int lastX, lastY;

    protected:
        int x, y;
    private:
};
#endif //PLAYER_H