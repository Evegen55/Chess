#ifndef CHESSBOARD_H
#define CHESSBOARD_H

#include <QObject>

class ChessBoard : public QObject
{
    Q_OBJECT
public:
    explicit ChessBoard(QObject *parent = nullptr);

signals:

public slots:
};

#endif // CHESSBOARD_H