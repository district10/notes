---
### Refs

- [PostgreSQL Doc Online][postgre-online]
- [PostgreSQL Wiki FAQ][faq]
- [PosrgreSQL Ubuntu Help][pg-ubuntu-help]
- [Postgres Succinctly][postgres-succinctly]

[postgre-online]: http://www.postgresql.org/docs/9.3/interactive/index.html
[faq]: http://wiki.postgresql.org/wiki/FAQ
[postgres-succinctly]: http://www.postgresql.org/docs/books/
[pg-ubuntu-help]: https://help.ubuntu.com/community/PostgreSQL







---
### TOC

- Preface
- I. Tutorial
- II. The SQL Language
- III. Server Administration
- V. Server Programming
- VI. Reference
- VII. Internals
- VIII. Appendixes







---
### Preface

1. [What is PostgreSQL?][what-is-postgresql]
 - PostgreSQL is an object-relational database management system (ORDBMS), pronounced [Post-Gres-Q-L][how-to-pronunce]

[what-is-postgresql]: http://www.postgresql.org/docs/9.3/interactive/intro-whatis.html
[how-to-pronunce]: http://www.postgresql.org/files/postgresql.mp3


2. [A Brief History of PostgreSQL][a-brief-history]
 - The Berkeley POSTGRES Project (Led by Prof. Michael Stonebracker)
 - Postgres95
 - PostgreSQL

[a-brief-history]: http://www.postgresql.org/docs/9.3/interactive/history.html


3. [Conventions][conv]

[conv]: http://www.postgresql.org/docs/9.3/interactive/notation.html


4. Further Information
 - [Wiki][wiki]
 - [Website][website]
 - Mailing Lists
 - Yourself (it's an open-source project)

[wiki]: http://wiki.postgresql.org/
[website]: http://www.postgresql.org/


5. [Bug Reporting Guidelines][bug-reporting]

[bug-reporting]: http://www.postgresql.org/docs/9.3/interactive/bug-reporting.html










---
### I. [Tutorial][tutorial]

[tutorial]: http://www.postgresql.org/docs/9.3/interactive/tutorial.html


1. Getting Started
 - Installation
    - After Installation: [`sudo su - postgres`][role-not-exist]
 - [Architectural Fundamentals][tutorial-arch]
    - Server process, user's client (frontend) application
    - handle multiple concurrent connections. To achieve this it starts ("forks") a new process for each connection. 
 - [Creating a Database][tutorial-createdb]
    - ```
createdb mydb
dropdb mydb
```


 - [Accessing a Database][tutorial-accessdb]
    - ```
psql mydb
select sersion();
help;
help create table;
\q
```

[role-not-exist]: http://stackoverflow.com/questions/11919391/postgresql-error-fatal-role-username-does-not-exist
[tutorial-arch]: http://www.postgresql.org/docs/9.3/interactive/tutorial-arch.html
[tutorial-createdb]: http://www.postgresql.org/docs/9.3/interactive/tutorial-createdb.html
[tutorial-accessdb]: http://www.postgresql.org/docs/9.3/interactive/tutorial-accessdb.html


2. [The SQL Language][sql-language-help]
 - [Introduction][sql-intro]
 - Concepts
    - PostgreSQL is a relational database management system (RDBMS).
    - Relation is essentially a mathematical term for table.
    - A more modern development is the object-oriented database. 
 - Creating a New Table
    - ```
CREATE TABLE weather (
    city            varchar(80),
    temp_lo         int,           -- low temperature
    temp_hi         int,           -- high temperature
    prcp            real,          -- precipitation
    date            date
);
```


 - Populating a Table With Rows
 - Querying a Table
 - Joins Between Tables
 - Aggregate Functions
 - Updates
 - Deletions

[sql-language-help]: http://www.postgresql.org/docs/9.3/interactive/tutorial-sql.HTML
[sql-intro]: http://www.postgresql.org/docs/9.3/interactive/tutorial-sql-intro.html



3. Advanced Features
 - Introduction
 - Views
 - Foreign Keys
 - Transactions
 - Window Functions
 - Inheritance
 - Conclusion



















---
### II. The SQL Language

---
### III. Server Administration

---
### V. Server Programming

---
### VI. Reference

---
### VII. Internals


### VIII. Appendixes




---

~~~
log: $1. 2014-04-19: created; 
~~~



Some Notes: 

- SQL is case insensitive about key words and identifiers, except when identifiers are double-quoted to preserve the case (not done above).