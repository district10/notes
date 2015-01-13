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

### Chapter 02. URLs and resources 

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

### Chapter 03. HTTP Messages

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

### Chapter 04. Connection Management

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
* Keep-Alive and Dumb Proxies
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
                ```xml
                <VirtualHost www.marys-antiques.com>
                ServerName www.marys-antiques.com
                DocumentRoot /docs/mary
                TransferLog /logs/mary.access_log
                ErrorLog /logs/mary.error_log
                </VirtualHost>
                ```
            * User home directory docroots (`GET /~Bob/index.html` ==> /home/Bob/index.html)
        * Directory Listings
        * Dynamic Content Resource Mapping
            ```
            ScriptAlias /cgi-bin/ /usr/local/etc/httpd/cgi-programs/
            AddHandler cgi-script .cgi
            ```
        * Server-Side Includes (SSI)
        * Access Controls
    * Step 5: Building Responses
        * Response Entities
        * MIME Typing
        * mime.types
        * Magic typing
        * Explicit typing (igonre file extension or content (maybe magic number))
        * Type negotiation
        * Redirection
        * Permanently/temporarily moved resources
        * URL augmentation
        * Load balancing
    * Step 6: Sending Responses
    * Step 7: Logging


### Chapter 6. Proxies

Web Intermediaries

Private and Shared Proxies

Proxies (middlemen) Versus Gateways (protocol converter)

Why Use Proxies?
* Child filter 
* Document access controller
* Security firewall
* Web cache 
* Surrogate
* Content router
* Transcoder (`*.gif` ==> `*.jpeg`, etc)
* Anonymizer

Where Do Proxies Go?

Proxy Server Deployment
    * Egress proxy (adult content)
    * Access (ingress) proxy (ISP access proxy: download speed)
    * Surrogates
    * Network exchange proxy

Proxy Hierarchies
* inbound
* outbound
* parent
* Proxy hierarchy content routing

How Proxies Get Traffic
* Modify the client (Proxy Plugin)
* Modify the network (intercepting proxy, like GFW)
* Modify the DNS namespace
* Modify the web server

Client Proxy Settings
* Manual configuration
* Browner preconfiguartion
* Proxy auto-configuration: Proxy auto-configuration (PAC)
    + suffix: ".pac"
    + MIME type: "application/x-ns-proxy-autoconfig"
* Client Proxy Configuartion: Web Proxy Autodiscovery Protocol (WPAD)
    + Dynamic Host Discovery Protocol (DHCP)
    + Service Location Protocol (SLP)
    + DNS well-known hostnames
    + DNS SRV records
    + DNS service URIs in TXT records

* Tricky Things About Proxy Requests
    + Proxy URIs Differ from Server URIs
    + Server request, explicit proxy request, surrogate(reverse proxy) request, intersecpting proxy request

* The Same Problem with Virtual Hosting (index.html ==> bob/index.html? or tom/index.html?)

* Intercepting Proxies Get Partial URIs
* Proxies Can Handle Both Proxy and Server Requests
* In-Flight URI Modification
    + URI Client Auto-Expansion and Hostname Resolution
    + URI Resolution Without a Proxy
    + URI Resolution with an Explicit Proxy
    + URI Resolution with an Intercepting Proxy
Tracing Messages
    * The Via Header
        + Via syntax
        + Via request and response paths
        + Via and gateways
        + The Server and Via headers
        + Privacy and security implications of Via
    * The TRACE Method
        + Max-Forwards

Proxy Authentication

Proxy Interoperation

Handling Unsupported Headers and Methods

* OPTIONS: Discovering Optional Feature Support
The Allow Header


### Chapter 7. Caching

Redundant Data Transfers
Bandwidth Bottlenecks
Flash Crowds
Distance Delays
Hits and Misses (hits, misses, revalidations(freshness check))
* cache hit
* cache miss
* revalidate hit (slow hit)
* revalidate miss

Revalidate request with If-Modified-Since 
+ ==> Revalidate hit:  304(not modified) response ("still fresh")
+ ==> Revalidate miss: normal HTTP 200 OK response + full content, 

Hit Rate/Ratio (fraction of requests)
Byte Hit Rate

Distinguishing Hits and Misses

Cache Topologies
+ private caches (Firefox: `about:cache`)
+ shared public caches (public proxy caches)

Proxy Cache Hierarchies
Cache Meshes, Content Routing, and Peering(sibling caches)

Cache Processing Steps
* Step 1: Receiving
* Step 2: Parsing
* Step 3: Lookup
* Step 4: Freshness Check
* Step 4: Freshness Check
* Step 5: Response Creation
* Step 6: Sending
* Step 7: Logging


Cache Processing Flowchart

Keeping Copies Fresh
* document expiration
    + Cache-Control: max-age=<max-age(in seconds)>
    + Expires: <date>
* server revalidation
* Revalidation with Conditional Methods (conditional request)
    + If-Modified-Since: <date> 
    + If-None-Match: <tags> ETags(entity tags)

Weak and Strong Validators
When to Use Entity Tags and Last-Modified Dates

Controlling Cachability
* No-Cache and No-Store Response Headers
* Cache-Control: no-store
* Cache-Control: no-cache # (may be cached locally)
* Pragma: no-cache
* Max-Age Response Headers
* Cache-Control: max-age=3600
* Cache-Control: s-maxage=3600 # shared(public) cache
* Expires Response Headers
* Expires: <date>
* Must-Revalidate Response Headers
* Cache-Control: must-revalidate
* Heuristic Expiration
* LM-Factor algorithm
* Client Freshness Constraints
* Max-Age Response Headers
* Client Freshness Constraints

Setting Cache Controls
* Controlling HTTP Headers with Apache
    + mod_headers (the mod_headers module)
        ```xml
        <Files *.html>
        Header set Cache-control no-cache
        </Files>
        ```
    + mod_expires
        * ExpiresDefault M86400
        * ExpiresByType text/html "modification plus 2 days 6 hours 12 minutes"
        * mod_cern_meta
* Controlling HTML Caching Through HTTP-EQUIV

Detailed Algorithms
* Age and Freshness Lifetime
* Age Computation
* Apparent age is based on the Date header
* Hop-by-hop age calculations
* Compensating for network delays
* Freshness Lifetime Computation
...

Caches and Advertising
* The Advertiser’s Dilemma
* The Publisher’s Response (cache-busting)

Log Migration


### Chapter 8. Integration Points: Gateways, Tunnels, and Relays

