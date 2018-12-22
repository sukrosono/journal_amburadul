## Usefull when you know it

1.  To know your ssl certificate location:

  `php -r "var_dump(openssl_get_cert_locations());"`

1.  Your composer unable to enable crypto?
`renew your cert` via https://curl.haxx.se/

1.  PDF related

  2.  [pdftk](https://www.pdflabs.com/)
      3. [pdftk server(cli)](https://www.pdflabs.com/tools/pdftk-server/)

  2.  [tcpdf](https://tcpdf.org/)

  2.  Filling pdf form with dfd or xdfd, i unable to use pdftk-php. but it able use the
  pdftk-server(cli), then i face second throuble that with xdfd(which more readable) throwing error when generate the new pdf file. Sadly the xdfd file generated Foxit file reader throwing error, but xdfd file generated from x wasn't. The clear differences was the new line character (LF) was inside xml tag, on the working xdfd file which later used by pdftk-server.

1.  [PHPExcel](https://github.com/PHPOffice/PHPExcel "repo newer version will be PhpSpreadsheet")

  2.  [set border](http://www.craiglotter.co.za/2010/04/14/phpexcel-how-to-place-a-border-around-a-cell-range/ "article")
  > when article is invalid you can take a look on this [gist](https://gist.github.com/outman/3760142)

1.  [PhpSpreadsheet](https://github.com/PHPOffice/PhpSpreadsheet)

1. Wordpress [wp]
  1. [wp internationalization][wp-i18n]

[wp-i18n]: https://i18n.svn.wordpress.org/
