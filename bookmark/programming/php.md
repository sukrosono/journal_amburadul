## PHP



### Personal note as developing with php, hopefully be useful.

1.  [Setting time limit][set time limit]
    > Only have affects when function call on top of the script.


[set time limit]: https://stackoverflow.com/questions/5140258/increase-php-script-execution-time/5140299#5140299 "See my comment"


### Installation on Linux
1.  [How to Install and Configure PHP 7.0 or PHP 7.1 on Ubuntu 16.04][install]
1.  [Upgrade to the specific php 7.1/7.2 from php 7.0][install1]
1.  [Install LAMP Stack (Apache, MariaDB, PHP, phpMyAdmin) on LinuxMint][install2]

[install]: https://www.vultr.com/docs/how-to-install-and-configure-php-70-or-php-71-on-ubuntu-16-04
[install1]: https://askubuntu.com/questions/856793/upgrade-to-the-specific-php-7-1-7-2-from-php-7-0-in-ubuntu-16-04
[install2]: https://www.2daygeek.com/install-lamp-stack-apache-mariadb-php-phpmyadmin-on-linuxmint/#

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

### Common use
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
