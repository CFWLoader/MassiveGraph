//
// Created by CFWLoader on 7/25/17.
//
#include <iostream>

#include <comm/SocketOpts.h>

using namespace std;
using namespace nameless::comm::SocketOpts;

int testCreateNonblockingOrDie1()
{
    sockaddr_in addr;

    int fd = createNonblockingOrDie(addr.sin_family);

    closeSocket(fd);

    return 0;
}

int main(int argc, char* argv[])
{
    testCreateNonblockingOrDie1();

    return 0;
}