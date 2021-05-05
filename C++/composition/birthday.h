#ifndef BIRTHDAY_H
#define BIRTHDAY_H

class Birthday
{
    public:
        Birthday(int d, int m, int y);
        void printBirthDay();

    private:
        int day, month, year;       
};

#endif