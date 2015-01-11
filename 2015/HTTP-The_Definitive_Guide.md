HTTP - The Definitive Guide
===========================


Part I. HTTP: The Web's Foundation
----------------------------------

### Chapter 01. Overview of HTTP

Keywords:
* MIME, URIs, URLs, URNs
* Transactions:
    * GET
    * PUT
    * DELETE
    * POST
    * HEAD
* Status code
* Request/Response Messages:
    * Start line
    * Header
        * Content-type header
        * Content-length header
    * Body(optional, <an empty line(CRLF)> + <body>)
* Connections:
    * TCP/IP
    * Connections, IP address, and Port Numbers
* Protocol Versions:
    * 0.9
    * 1.0
    * 1.0+
    * 1.1
    * 2.0(HTTP-NG)
* Architechtural Components of the Web
    * Proxies
    * Caches(Web cache, or caching proxy)
    * Gateways
    * Tunnels
    * Agents(Web browsers, etc)

# Chapter 02. URLs and resources 

Scheme(how), Host(where), Path(what)
```xml
[<scheme>://][<user>[:<password>]@]<host>[:<port>][/<path>][;<params>][?<query>][#<frag>]
```
* Params(Parameters), name/value pairs.
* Base URLs: `<BASE>` HTML tag. Converting relative to absolute URLs
* Expandomatic URLs
    * Hostname expansion(`www.` `.com`, etc)
    * History expansion
* Shady Characters

# Chapter 03. HTTP Messages

Points:
* Transactional direction: inbound, outbound
* Messages flow: upstream, downstream
* Messages syntax
    * Request message
        ```xml
        <method> <request-URL> <version>
        <headers>

        <entity-body>
        ```
    * Response message
        ```xml
        <version> <status-code> <reason-phrase>
        <headers>

        <entity-body>
        ```
    * ?
        * version 2.22 > 2.3
        * Header continuation lines
        * Method: GET, PUT, POST, TRACE, OPTIONS, DELETE
        * UA(User Agent): UA-OS, UA-CPU, etc.
        * Headers
            * General headers: Date: Tue, 3 Oct 1974 02:16:00 GMT
            * Request headers: Accept: */*
            * Accept headers
            * Conditional request headers
            * Request security headers
            * Proxy request headers
        * Response headers: Server: Tiki-Hut/1.0
        * Entity headers: Content-Type: text/html; charset=iso-latin-1
        * Content headers
        * Entity caching headers
        * Extension headers:

See also
* http://www.w3.org/Protocols/

# Chapter 04. Connection Management

TCP Reliable Data Pipes

TCP Streams Are Segmented and Shipped by IP Packets

Keeping TCP Connections Straight

A TCP connection
* `<source-IP-address, source-port, destination-IP-address, destination-port>`
* Programming with TCP Sockets
    * s = socket(<parameters>): Creates a new, unnamed, unattached socket.
    * bind(s, <local IP:port>): Assigns a local port number and interface to the socket.

TCP Performance Considerations
* HTTP Transaction Delays
* Performance Focus Areas
* Performance Focus Areas
* Delayed Acknowledgments
* TCP Slow Start
* Nagle’s Algorithm and TCP_NODELAY
* TIME_WAIT Accumulation and Port Exhaustion
* Serial Transaction Delays

Parallel Connections
* Parallel Connections May Make Pages Load Faster
* Parallel Connections Are Not Always Faster
* Parallel Connections May “Feel” Faster

Persistent Connections

Persistent Versus Parallel Connections

HTTP/1.0+ Keep-Alive Connections
* Keep-Alive Operation

Keep-Alive and Dumb Proxies
* The Connection header and blind relays
* Proxies and hop-by-hop headers

The Proxy-Connection Hack

HTTP/1.1 Persistent Connections
Pipelined Connections

The Mysteries of Connection Close
* “At Will” Disconnection
* Content-Length and Truncation
* Connection Close Tolerance, Retries, and Idempotency
* Graceful Connection Close

See also
* http://www.w3.org/Protocols/HTTP/Performance/
* http://www.acm.org/sigcomm/ccr/archive/2001/jan01/ccr-200101-mogul.pdf


Part II: HTTP Architechture
---------------------------

### Chapter 5. Web Servers

Web Server Implementations: HTTP, TCP

General-Purpose Software Web Servers
Web Server Appliances
Embedded Web Servers
What Real Web Servers Do
* Step 1: Accepting Client Connections
* Handling New Connections
* Client Hostname Identification (reverse DNS)
* Determining the Client User Through ident
* Step 2: Receiving Request Messages
* Internal Representations of Messages
* Connection Input/Output Processing Architectures
* Step 3: Processing Requests
* Step 4: Mapping and Accessing Resources
* Docroots (document root)
    * Virtually hosted docroots
<VirtualHost www.marys-antiques.com>
ServerName www.marys-antiques.com
DocumentRoot /docs/mary
TransferLog /logs/mary.access_log
ErrorLog /logs/mary.error_log
</VirtualHost>
    * User home directory docroots (`GET /~Bob/index.html` ==> /home/Bob/index.html)
* Directory Listings










