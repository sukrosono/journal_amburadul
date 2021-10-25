alias wp='php /usr/local/bin/wp/wp-cli.phar'
alias www="cd /var/www/html/"
alias antareja="cd /var/www/html/wp-site/wp-content/plugins/antareja/"
alias netbeans10="/home/enter/netbeans10/bin/netbeans"
alias open_journal="cd /home/enter/adi_doc/project/git_project/web_tech_RnD"
alias personal_journal="cd /home/enter/adi_doc/note"
alias personal_branding="cd /home/enter/adi_doc/project/git_project/brutalcrozt.github.io"
alias log-apache2="leafpad /var/log/apache2/error.log"

### yt-dl
# yt-dl sub
# --convert-subs 	FORMAT currently supported: srt|ass|vtt|lrc)
# --embed-subs		Embed subtitles in the video (only for mp4, webm and mkv videos)
alias youtube-dl-mp3="youtube-dl -i --extract-audio --audio-quality 0 --audio-format mp3"
alias youtube-dl-pl="youtube-dl -ci --download-archive list.txt --yes-playlist --write-auto-sub --write-sub --sub-lang en,id --sub-format srt/sub/ssa/vtt/ass/best"
alias youtube-dl-mp3-pl="youtube-dl -cix --download-archive list.txt --audio-format mp3 --audio-quality 0 --yes-playlist"
# list vids
alias youtube-dl-list="youtube-dl -ci --download-archive list.txt --write-auto-sub --write-sub --sub-lang en,id --sub-format srt/sub/ssa/vtt/ass/best"
# you need specify desired format
alias youtube-dl-convert-sub="youtube-dl -v --skip-download --write-sub --sub-lang en,id --sub-format srt/sub/ssa/ass --convert-subs ass"

alias prettyjson='python -m json.tool'

alias cake="/home/enter/adi_doc/project/playground/composer_playground/my_app/bin/cake"
alias hide-dir='export PS1="\u > "'

# on apa off hayo?
alias reapply-atom-snippets="up up up into heaven"
