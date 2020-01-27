#include "card.h"

playingCard::playingCard(int v, suits s)
{
   value = v;
   suit = s;
}

int playingCard::Value() const
{
   return value;
}

suits playingCard::Suit() const
{
   return suit;
}


