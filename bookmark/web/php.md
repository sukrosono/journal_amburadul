## Usefull when you know it
1. To know your ssl certificate location:

  `php -r "var_dump(openssl_get_cert_locations());"`

2. Your composer unable to enable crypto?

  `renew your cert` via https://curl.haxx.se/

### PDF related
1. [pdftk](https://www.pdflabs.com/)

   1. [pdftk server(cli)](https://www.pdflabs.com/tools/pdftk-server/)

2. [tcpdf](https://tcpdf.org/)

2. Filling pdf form with dfd or xdfd, i unable to use pdftk-php. but it able use the pdftk-server(cli), then i face second throuble that with xdfd(which more readable) throwing error when generate the new pdf file. Sadly the xdfd file generated Foxit file reader throwing error, but xdfd file generated from x wasn't. The clear differences was the new line character (LF) was inside xml tag, on the working xdfd file which later used by pdftk-server.

1. [PHPExcel](https://github.com/PHPOffice/PHPExcel "repo newer version will be PhpSpreadsheet")

   1. [set border](http://www.craiglotter.co.za/2010/04/14/phpexcel-how-to-place-a-border-around-a-cell-range/ "article")
   > when article is invalid you can take a look on this [gist](https://gist.github.com/outman/3760142)

1. [PhpSpreadsheet](https://github.com/PHPOffice/PhpSpreadsheet)

1. [Intro composer][intro-composer]
1. [Composer autoload function][psr-autoload]
1. [awesome-php][awesome-php]
  > A curated list of php library


[awesome-php]: https://github.com/ziadoz/awesome-php

## Extension
1. [Enable ext-intl][ext-intl]
  > executed with `apt install php7.3-intl`


[ext-intl]: https://stackoverflow.com/questions/42243461/how-to-install-php-intl-extension-in-ubuntu-14-04

### Wordpress
1. [Wordpress][wp]
   1. [WordPress cli][cp-cli-handbook]
   1. [wp internationalization][wp-i18n]
   1. use [single-wp-core-lib][single-wp]
   1. [change language on wp][wp-lang]
     > using constant WPLANG still work on wp 5

  1. [wp theme and plugin][wp-thm-pl]

1. WordPress plugin development
   1. [Creating a table in the admin-style][wp-stack-1]

1. Wordpress theme
   1. [WP Bootstrap 4][wp-b-4]
   1. [understrap][understrap]
   1. [List free wp theme 2019][wp-theme-19]

## Handy framework
1. [CodeIgniter][ci-php]
   > @TODO brief reason why you use it
1. [Cakephp][Cakephp]
   > @TODO brief reason why you use it

   1. [Awesome-cakephp][awesome-cakephp]
     > list of cakephp plugin

[ci-php]: https://github.com/bcit-ci/CodeIgniter
[Cakephp]: https://github.com/cakephp/cakephp
[awesome-cakephp]: https://github.com/FriendsOfCake/awesome-cakephp

## ORM
1. [Atlas orm][atlas-orm]

[atlas-orm]: http://atlasphp.io/

## Documentation
1. [Php Documentor 2][phpdoc2]


[wp]: https://codex.wordpress.org/
[wp-i18n]: https://i18n.svn.wordpress.org/
[single-wp]: https://wordpress.stackexchange.com/questions/57109/how-to-share-wordpress-core-library
[wp-lang]: https://codex.wordpress.org/Installing_WordPress_in_Your_Language#WordPress_v4.0_and_above
[wp-b-4]: https://wordpress.org/themes/wp-bootstrap-4/
[understrap]: https://github.com/understrap/understrap
[wp-theme-19]: https://athemes.com/collections/free-wordpress-themes
[wp-thm-pl]: https://wpackagist.org/
[wp-cli-handbook]: https://make.wordpress.org/cli/handbook/


[wp-stack-1]: https://wordpress.stackexchange.com/questions/1413/creating-a-table-in-the-admin-style
[phpdoc2]: https://github.com/phpDocumentor/phpDocumentor2
[psr-autoload]: https://stackoverflow.com/questions/24171078/composer-psr-how-to-autoload-functions
[intro-composer]: http://www.darwinbiler.com/creating-composer-package-library/
