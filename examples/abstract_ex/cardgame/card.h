#ifndef _PLAYINGCARD_H_
#define _PLAYINGCARD_H_
enum suits {Spades, Diamonds, Clubs, Hearts};
class playingCard
{
   public:
      playingCard(int value, suits suit);
      int Value() const;
      suits Suit() const;
   private:
      int value;
      suits suit;
};
#endif
