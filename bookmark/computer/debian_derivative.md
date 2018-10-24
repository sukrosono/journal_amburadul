## List

## Program
<details>
  <summary>Program list</summary>

1. Gimp.<br>
   > @TODO add small desc, website, repo

1. InkScape.<br>
   > @TODO add small desc, website, repo

1. Open Broadcaster Software studio.
   > [repository][obs repo] [Ubuntu install instruction][ubuntu install obs]

1. [DIA][dia website]<br>
   > DIA is a shorten form of Diagram, A Software Design Tools which available on major OS.
   As alternative on linux we had [argouml][argouml]

1. [9 Best Free Video Editing Software for Linux In 2018][prog3]

1. [Top 3 Linux Video Editors][prog4]

1. [How To Install Linux, Apache, MySQL, PHP (LAMP) stack][prog5]

</details>

[obs repo]: https://github.com/jp9000/obs-studio
[ubuntu install obs]: https://github.com/jp9000/obs-studio/wiki/install-instructions#ubuntu-installation
[prog3]: https://itsfoss.com/best-video-editing-software-linux/
[prog4]: https://www.linux.com/news/top-3-linux-video-editors
[prog5]: https://www.digitalocean.com/community/tutorials/how-to-install-linux-apache-mysql-php-lamp-stack-on-ubuntu-16-04
[dia website]: http://live.gnome.org/Dia
[argouml]: http://argouml.tigris.org/

### Common problem
1. How do I [continue][common1] configuration if apt-get was interrupted?
0. [Start][common2] a new process without blocking the terminal.
1. [auto-mount][common3] a partition.
1. [what user apache2 service use?][sf-q]
   > \# ps aux | egrep '(apache|httpd)'
1. [How can I give write-access of a folder to all users in linux?][su-q]

[common1]: https://askubuntu.com/questions/425502/how-do-i-continue-configuration-if-apt-get-was-interrupted "SO again hell yeah"
[common2]: https://askubuntu.com/questions/287350/start-a-new-process-without-blocking-the-terminal
[common3]: https://community.linuxmint.com/tutorial/view/1513
[sf-q]: https://serverfault.com/questions/125865/finding-out-what-user-apache-is-running-as
[su-q]: https://superuser.com/questions/19318/how-can-i-give-write-access-of-a-folder-to-all-users-in-linux


### Common Command
1. List all user in group.
   - \# members group-name
     > via [Show All Members of a Group][common-command]

1. Command to list all Unix group names.
   - \# cut -d: -f1 /etc/group
     > via [so-question][common-command1]

1. Find owner and group of a directory.
   - \# ls -l /path/to/file
   - \# stat /path/to/file
     > via [askubuntu-question][common-command2]


[common-command]: https://www.cyberciti.biz/faq/linux-list-all-members-of-a-group/
[common-command1]: https://stackoverflow.com/questions/14059916/is-there-a-command-to-list-all-unix-group-names
[common-command2]: https://askubuntu.com/questions/175054/how-to-find-owner-and-group-of-a-directory
