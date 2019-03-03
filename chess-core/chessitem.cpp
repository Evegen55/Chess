#include "chessitem.h"

ChessItem::ChessItem(QObject *parent,
                     const ChessItemType& itemType,
                     const ChessColorType& itemColor) :
    QObject(parent),
    itemType(itemType),
    itemColor(itemColor)
{

}

ChessItemType ChessItem::getItemType() const
{
    return itemType;
}

ChessColorType ChessItem::getItemColor() const
{
    return itemColor;
}

char ChessItem::getPosX() const
{
    return posX;
}

void ChessItem::setPosX(char value)
{
    posX = value;
}

int ChessItem::getPosY() const
{
    return posY;
}

void ChessItem::setPosY(int value)
{
    posY = value;
}

