# PHP related tools etc

## PHP command
1. [Check the php extensions][php-ext] by :
   `php -m`
1. [Enable php extension][en-php-ext]

[php-ext]: https://stackoverflow.com/a/38831528/2368696
[en-php-ext]: https://stackoverflow.com/a/42243651/2368696

## Server related
1. Use [multiversion of php][multi-php] either manual or automatic

[multi-php]: https://askubuntu.com/questions/50344/how-to-have-two-versions-of-php-installed-and-switch-easily-between-them

## Usefull when you know it
1. To know your ssl certificate location:

  `php -r "var_dump(openssl_get_cert_locations());"`

2. Your composer unable to enable crypto?

  `renew your cert` via https://curl.haxx.se/


## Office related
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

## Another list
1. [awesome-php][awesome-php]
  > A curated list of php library

1. [24 Cool PHP Libraries][24-cool-lib] You Should Know About (2013)


[awesome-php]: https://github.com/ziadoz/awesome-php
[24-cool-lib]: https://tutorialzine.com/2013/02/24-cool-php-libraries-you-should-know-about

## Extension
  1. [Enable ext-intl][ext-intl]
    > executed with `apt install php7.3-intl`


[ext-intl]: https://stackoverflow.com/questions/42243461/how-to-install-php-intl-extension-in-ubuntu-14-04

## Personal note as developing with php, hopefully be useful.

1.  [Setting time limit][set time limit]
    > Only have affects when function call on top of the script.


[set time limit]: https://stackoverflow.com/questions/5140258/increase-php-script-execution-time/5140299#5140299 "See my comment"


## Installation on Linux
1.  [How to Install and Configure PHP 7.0 or PHP 7.1 on Ubuntu 16.04][install]
1.  [Upgrade to the specific php 7.1/7.2 from php 7.0][install1]
1.  [Install LAMP Stack (Apache, MariaDB, PHP, phpMyAdmin) on LinuxMint][install2]

[install]: https://www.vultr.com/docs/how-to-install-and-configure-php-70-or-php-71-on-ubuntu-16-04
[install1]: https://askubuntu.com/questions/856793/upgrade-to-the-specific-php-7-1-7-2-from-php-7-0-in-ubuntu-16-04
[install2]: https://www.2daygeek.com/install-lamp-stack-apache-mariadb-php-phpmyadmin-on-linuxmint/#

## Handy framework
1. [CodeIgniter][ci-php]
   > @TODO brief reason why you use it
1. [Cakephp][Cakephp]
   > @TODO brief reason why you use it

   1. [Awesome-cakephp][awesome-cakephp]
     > list of cakephp plugin

   1. [Enable virtual host (apache2) for cakephp app][enable-site]
     > debug: make sure [add it to host][vh-hosts], and check the error log

[ci-php]: https://github.com/bcit-ci/CodeIgniter
[Cakephp]: https://github.com/cakephp/cakephp
[awesome-cakephp]: https://github.com/FriendsOfCake/awesome-cakephp
[wp-erp]: https://github.com/wp-erp/wp-erp
[enable-site]: https://linuxize.com/post/how-to-set-up-apache-virtual-hosts-on-ubuntu-18-04/
[vh-hosts]: https://stackoverflow.com/q/19263135/2368696

### Codeigniter
1. [Codeigniter HTACCESS Removing index.php from URL.][cdi]
1. [Tested htaccess with Codeigniter][cdi1] , [htaccess-guide][htaccess]

[cdi]: https://github.com/tasmanwebsolutions/htaccess_for_codeigniter
[cdi1]: https://stackoverflow.com/questions/38477720/remove-index-php-from-url-in-codeigniter-3/38477932
[htaccess]: http://www.htaccess-guide.com/

### Encountered Codeigniter problem
1. Codeigniter 3 Session not working With >=PHP 7.
   1. Make sure proper configuration
      - [Official documentation][cdi-doc]
      - [Use absolute path][chathu-web]
   - Verifying solutions of [SO question][so-q]

[so-q]: https://stackoverflow.com/a/43816684/2368696
[cdi-doc]: https://www.codeigniter.com/user_guide/libraries/sessions.html#files-driver
[chathu-web]: https://chathu.me/2015/09/30/codeIgniter-3-session-file-driver/


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


## Common use
1.  [PHP server on local machine?][common]
1.  [php showing source code in localhost][common1]
1.  [Where is the Apache configuration located on Linux Mint?][common2]
1.  [How do I start/stop mysql server?][common3], [head on this][common3.1]
1.  [How to access phpMyAdmin after installation?][common4]
1.  [How to Switch between Multiple PHP Version on Ubuntu][common5]
1.  phpMyAdmin keep yelling mbstring extension missing?
    > 07-01-2018 you have php 7.0, 7.1, 7.2

    - Solutions
      - make sure 7.0 and 7.1 disabled with `a2dismod`
      - Purge with query php7.2
      - make sure 7.2 enabled with `a2enmod php7.2`
      - disable mbstring with `phpdismod`
      - enable mbstring with `phpenmod`
      - restart apache2 with `service apache2 restart`

1.  [apache not serving static content correctly][common6]
1.  [Apache and symbolic link in /var/www/html][common7]
    > postpone

[common]: https://stackoverflow.com/a/21872484
[common1]: https://askubuntu.com/questions/632918/php-showing-source-code-in-localhost
[common2]: https://superuser.com/questions/387966/where-is-the-apache-configuration-located-on-linux-mint
[common3]: https://askubuntu.com/questions/82374/how-do-i-start-stop-mysql-server
[common3.1]: https://askubuntu.com/a/383431/509163
[common4]: https://askubuntu.com/questions/19127/how-to-access-phpmyadmin-after-installation
[common5]: https://tecadmin.net/switch-between-multiple-php-version-on-ubuntu/
[common6]: https://stackoverflow.com/questions/7683211/apache-not-serving-static-content-correctly
[common7]: https://unix.stackexchange.com/questions/272476/apache-and-symbolic-link-in-var-www-html
