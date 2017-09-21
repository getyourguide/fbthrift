# How to get going

## Preparation

- Run thrift1 from within this directory: 
``
thrift1 --gen php:server,declarens,norequires -r ../tutorial.thrift
``
- Make sure you have composer installed or get it here https://getcomposer.org/
- Run ``composer install`` from within this directory (composer will autolaod the generated files, the php runtime
library as well it will fetch the needed hacklib runtime for you from the interwebs.

## Play

### Server
Open a second terminal and move to the folder where this file resides. You start the server as follows:
``
python runserver.py
``

### Client

To run the client you can go like:
``
php PhpClient.php --http
``