#include "qqtuserprotocol1.h"

QDebug& operator << ( QDebug& dbg, const QQtUserMessage1& msg )
{
    //这里打印一下，报文里面到底有什么信息，
    //一般到这里的，都是被解析好的message。

    dbg.nospace() << "{" << hex << msg.size() << "}";
    return dbg.space();
}

QQtUserProtocol1* QQtUserConnectionInstance1 ( QObject* parent )
{
    static QQtUserProtocol1* p0 = NULL;
    static QQtTcpServer* s0 = NULL;
    if ( !p0 && !s0 )
    {
        p0 = new QQtUserProtocol1 ( parent );

        s0 = new QQtTcpServer ( parent );
        s0->installProtocol ( p0 );
        s0->listen ( QHostAddress::Any, 8000 );

    }

    return p0;
}
