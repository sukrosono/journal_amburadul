## Usefull when you know it

0.  To know your ssl certificate location:
`php -r "var_dump(openssl_get_cert_locations());"`

0.  Your composer unable to enable crypto?
`renew your cert` via https://curl.haxx.se/

0.  PDF related

  0.  [pdftk](https://www.pdflabs.com/)
      0. [pdftk server(cli)](https://www.pdflabs.com/tools/pdftk-server/)
  0.  [tcpdf](https://tcpdf.org/)

  0.  Filling pdf form with dfd or xdfd, i unable to use pdftk-php. but it able use the
  pdftk-server(cli), then i face second throuble that with xdfd(which more readable) throwing error when generate the new pdf file. Sadly the xdfd file generated Foxit file reader throwing error, but xdfd file generated from x wasn't. The clear differences was the new line character (LF) was inside xml tag, on the working xdfd file which later used by pdftk-server.
