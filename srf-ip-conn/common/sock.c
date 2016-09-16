/*

Copyright (c) 2016 SharkRF OÜ. https://www.sharkrf.com/
Author: Norbert "Nonoo" Varga, HA2NON

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the "Software"),
to deal in the Software without restriction, including without limitation
the rights to use, copy, modify, merge, publish, distribute, sublicense,
and/or sell copies of the Software, and to permit persons to whom the
Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included
in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
DEALINGS IN THE SOFTWARE.

*/

#include "srf-ip-conn/common/sock.h"

// Get sockaddr, IPv4 or IPv6.
void *sock_get_in_addr(struct sockaddr *sa) {
	if (sa->sa_family == AF_INET)
		return &SOCK_ADDR_IN_ADDR(sa);
	return &SOCK_ADDR_IN6_ADDR(sa);
}

// Get port, IPv4 or IPv6.
uint16_t sock_get_port(struct sockaddr *sa) {
	if (sa->sa_family == AF_INET)
		return SOCK_ADDR_IN_PORT(sa);
	return SOCK_ADDR_IN6_PORT(sa);
}
