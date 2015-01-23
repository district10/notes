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


Part II. HTTP Architechture
---------------------------

### Chapter 05. Web Servers

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


### Chapter 06. Proxies

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


### Chapter 07. Caching

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


### Chapter 08. Integration Points: Gateways, Tunnels, and Relays

Client-Side and Server-Side Gateways
<client-protocol>/<server-protocol>

Protocol Gateways
* HTTP/*: Server-Side Web Gateways
* HTTP/HTTPS: Server-Side Security Gateways
* HTTPS/HTTP: Client-Side Security Accelerator Gateways

Resource Gateways
* Common Gateway Interface(CGI)
* Server Extension APIs

Application Interfaces and Web Services

Tunnels
* Establishing HTTP Tunnels with CONNECT (a raw byte relay)
+ CONNECT requests
CONNECT home.netscape.com:443 HTTP/1.0
User-agent: Mozilla/4.0
+ CONNECT responses
* Data Tunneling, Timing, and Connection Management
+ SSL Tunneling
+ SSL Tunneling Versus HTTP/HTTPS Gateways
* Tunnel Authentication
* Tunnel Security Considerations

Relays


### Chapter 09. Web Robots

Crawlers and Crawling

Where to Start: The “Root Set”
* stranded—isolated, 

Extracting Links and Normalizing Relative Links
* Loops and Dups

Trails of Breadcrumbs
* Trees and hash tables
* Lossy presence bit maps
* Checkpoints
* Partitioning

Aliases and Robot Cycles
* Canonicalizing URLs
* Filesystem Link Cycles
* Dynamic Virtual Web Spaces

Avoiding Loops and Dups
* Canonicalizing URLs
* Breadth-first crawling
* Throttling
* Limit URL size
* URL/site blacklist
* Pattern detection (`/subdir/subdir/subdir...`)
* Content fingerprinting
* Human monitoring

Robotic HTTP
* Identifying Request Headers
* Virtual Hosting
* Conditional Requests
* Response Handling
+ status codes
+ entities
* User-Agent Targeting


Misbehaving Robots
* Runaway robots
* Stale URLs
* Long, wrong URLs
* Nosy robots
* Dynamic gateway access

Excluding Robots
* Robots Exclusion Standard (robots.txt)
* Web Sites and robots.txt Files
+ retrive `robots.txt` and check response codes
+ robots.txt File Format
```xml
User-Agent: <robot-name> # case-insensitive substring of the robot’s name
```
+ Disallow/Allow prefix matching
* Other robots.txt Wisdom

Caching and Expiration of robots.txt

Robot Exclusion Perl Code

HTML Robot-Control META Tags
NOINDEX, NOFOLLOW, INDEX, FOLLOW, NOARCHIVE, ALL, NONE

Robot Etiquette(礼仪)
* http://www.robotstxt.org/wc/guidelines.html


### Chapter 10. HTTP-NG

HTTP’s Growing Pains
[HTTP-NG] Activity = HTTP: The Next Generation (HTTP-NG)

Modularize and Enhance
* Layer {1..3}
* Distributed Objects
* Layer 1: [Messaging (WebMUX)](http://www.w3.org/Protocols/MUX/WD-mux-980722.html)
* Layer 2: Remote Invocation ([Binary Wire Protocol](http://www.w3.org/Protocols/HTTP-NG/1998/08/draft-janssen-httpng-wire-00.txt))
* Layer 3: Web Application

[HTTP-NG]: http://www.w3.org/Protocols/HTTP-NG/


PART III. Identification, Authorization, and Security
-----------------------------------------------------

### Chapter 11. Client Identification and Cookies

The Personal Touch

1. HTTP Headers
2. Client IP Address
3. User Login (Pretty soon, Fred will give up on the Internet and go back to watching Oprah...)
4. Fat URLs
* Ugly URLs
* Can't share URLs
* Breaks caching
* Extral server load
* Excape hatches (may lost your shopping cart)
* Not persistent across sessions
5. Cookies
* Types of Cookies: session and persistent
* How Cookies Work
* Cookie Jar: Client-Side State
+ domain
+ allh
+ path
+ secure
+ expiration
+ name
+ value
* Different Cookies for Different Sites (`Set-Cookie: key=val`, Cookie: key=value`)
+ Cookie Domain attribute: `domain=<SITE>`, <SITE> e.g. "www.jianshu.com"
+ Cookie Path attribute: `path=/autos/`
* Cookie Ingredients
+ Version 0 (Netscape) Cookies
+ Version 1 (RFC 2965) Cookies
* Cookies and Session Tracking
* Cookies and Caching
+ Mark documents uncacheable if they are
+ Be cautious about caching Set-Cookie headers
+ Be cautious about requests with Cookie headers
* Cookies, Security, and Privacy


### Chapter 12. Basic Authentication

* Authentication
* Authentication Protocols and Headers
* Security Realms
* Basic Authentication
+ Challenge/Response 
- Challenge(server2client): `WWW-Authenticate: Basic realm=<quoted-realm>`
- Response(client2server): `Authorization: Basic <base64-username-and-password>`
- Base-64 Username/Password Encoding: BASE64ENC(<username>:<passwd>)
* Proxy Authentication

| Web Server | Proxy Server |
| :---: | :---: |
| Unauthorized status code: 401 | Unauthorized status code: 407 |
| WWW-Authenticate | Proxy-Authenticate |
| Authorization | Proxy-Authorization |
| Authentication-Info | Proxy-Authentication-Info |

* The Security Flaws of Basic Authentication


### Chapter 13. Digest Authentication

The Improvements of Digest Authentication
* Transport Layer Security (TLS)
* Secure HTTP (HTTPS)

Using Digests to Keep Passwords Secret

One-Way Digests
* aliases of `Digest functions`= `cryptographic checksums`, `one-way hash functions`, or `fingerprint functions`

* MD5

| Input | MD5 digest |
| :---: | :---: |
| “Hi” | C1A5298F939E87E8F962A5EDFC206918 |
| “bri:Ow!” | BEAAA0E34EBDB072F8627C038AB211F8 |
| “3.1415926535897” | 475B977E19ECEE70835BC6DF46F4F6DE |

Using Nonces to Prevent Replays
* a special token called a `nonce`

The Digest Authentication Handshake
* chanllenge, nonce, algorithms...

## Digest Calculations

Digest Algorithm Input Data

Digests are computed from three components:
* A pair of functions consisting of a one-way hash function H(d) and digest KD(s,d), where s stands for secret and d stands for data
* A chunk of data containing security information, including the secret password, called A1
* A chunk of data containing nonsecret attributes of the request message, called A2
The two pieces of data, A1 and A2, are processed by H and KD to yield a digest.


H(<data>) = MD5(<data>)
KD(<secret>,<data>) = H(concatenate(<secret>:<data>))
qop: quality of protection
<request-method>: HTTP request method
<uri-directive-value>: the request URI from the request line
nc: nonce count

The Security-Related Data (A1)
| Algorithm | A1 |
| :---: | :---: |
| MD5 | A1 = <user>:<realm>:<password> |
| MD5-sess | A1 = MD5(<user>:<realm>:<password>):<nonce>:<cnonce> |

The Message-Related Data (A2)
| qop | A2 |
| undefined | <request-method>:<uri-directive-value> |
| auth | <request-method>:<uri-directive-value> |
| auth-int | <request-method>:<uri-directive-value>:H(<request-entity-body>) |

Overall Digest Algorithm
* Old and new digest algorithms
| qop | Digest algorithm | Notes |
| :---: | :---: | :---: |
| undefined | KD(H(A1), <nonce>:H(A2)) | Deprecated |
| auth or auth-int | KD(H(A1), <nonce>:<nc>:<cnonce>:<qop>:H(A2)) | Preferred |
* Unfolded digest algorithm cheat sheet
| qop | Algorithm | Unfolded algorithm |
| :---: | :---: | :---: |
| undefined | <undefined>, MD5, MD5-sess | MD5(MD5(A1):<nonce>:MD5(A2)) |
| auth | <undefined>, MD5, MD5-sess | MD5(MD5(A1):<nonce>:<nc>:<cnonce>:<qop>:MD5(A2)) |
| auth-int | <undefined>, MD5, MD5-sess | MD5(MD5(A1):<nonce>:<nc>:<cnonce>:<qop>:MD5(A2)) |

Digest Authentication Session

Preemptive Authorization
* Next nonce pregeneration
* Limited nonce reuse
* Synchronized nonce generation

Nonce Selection
* Suggested by RFC 2617, nonce = BASE64(time-stamp H(time-stamp ":" ETag ":" private-key))
* ETag: the HTTP ETag header associated with the requested entity

Symmetric Authentication
* Definitions for A2 by algorithm (request digests)
| qop | A2 |
| :---: | :---: |
| undefined | <request-method>:<uri-directive-value> |
| auth | <request-method>:<uri-directive-value> |
| auth-int | <request-method>:<uri-directive-value>:H(<request-entity-body>) |
* Definitions for A2 by algorithm (response digests)
| qop | A2 |
| :---: | :---: |
| undefined | :<uri-directive-value> |
| auth | :<uri-directive-value> |
| auth-int | :<uri-directive-value>:H(<response-entity-body>) |

Quality of Protection Enhancements
* Use of qop is optional, but only for backward compatibility with the older RFC 2069 specification.

Message Integrity Protection

Digest Authentication Headers

Practical Considerations
* Multiple Challenges
* Error Handling
* Protection Spaces
* Rewriting URIs
* Caches

Security Considerations
* Header Tampering
* Replay Attacks
* Multiple Authentication Mechanisms
* Dictionary Attacks
* Hostile Proxies and Man-in-the-Middle Attacks
* Chosen Plaintext Attacks
* Storing Passwords


### Chapter 14. Secure HTTP

Making HTTP Safe
HTTPS
Digital Cryptography: The Art and Science of Secret Coding
Cipher


Symmetric-Key Cryptography
* (e=k), encoding = decoding
* P = D(C, d)
* DES, Triple-DES, RC2, and RC4
* Key Length and Enumeration Attacks
v
