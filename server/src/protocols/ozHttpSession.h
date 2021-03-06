/** @addtogroup Protocols */
/*@{*/


#ifndef OZ_HTTP_SESSION_H
#define OZ_HTTP_SESSION_H

#include "../base/ozConnection.h"

class HttpController;
class HttpConnection;
class HttpStream;

/// Class representing one HTTP session from start to finish.
class HttpSession
{
private:
    uint32_t mSession;                  ///< Session identifier

    HttpStream *mHttpStream;            ///< Stream represented in this session

public:
    HttpSession( int session );
    ~HttpSession();

public:
    bool recvRequest( HttpConnection *connection, const std::string &requestType, const std::string &requestUrl, const Connection::Headers &requestHeaders, Connection::Headers &responseHeaders );

    uint32_t session() const { return( mSession ); }
};

#endif // OZ_HTTP_SESSION_H


/*@}*/
