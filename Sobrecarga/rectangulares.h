#ifndef rectangulares
#define rectangulares

class rect
{
    private:
        int x;
        int y;
    
    public:
        rect();
        rect(int x, int y);
        rect operator+(rect val);
        rect operator-(rect val);
        int getX{};
        int getY{};
        virtual ~rect{};

}