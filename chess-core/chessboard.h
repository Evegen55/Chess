#ifndef CHESSBOARD_H
#define CHESSBOARD_H

#include "chess-core_global.h"
#include <QObject>

class CHESSCORESHARED_EXPORT ChessBoard : public QObject
{
    Q_OBJECT
public:
    explicit ChessBoard(QObject *parent = nullptr);

signals:

public slots:
};

#endif // CHESSBOARD_H
