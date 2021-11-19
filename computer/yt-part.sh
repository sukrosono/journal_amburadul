#!/bin/sh
# constult so https://unix.stackexchange.com/questions/230481/how-to-download-portion-of-video-with-youtube-dl-command

# expected invoked like so yt-part url ss_time duration ./yt-part.sh nKG8rUhJTgs 05:00 02:30
#allias yt-get-murl="youtube-dl --youtube-skip-dash-manifest -g "
#murl= $arg1
#ss_time= $arg2
#duration= $arg3
#v, a= "$(yt-get-murl murl)"
#a= "$(yt-get-murl murl)"

#echo "${v} and ${a}"

#ffmpeg -ss "$ss_time" -i "$v" -ss "$ss_time" -i "$a" -map 0:v -map 1:a -ss 30 -t "$duration" -c:v libx264 -c:a aac yt-part.mkv
#echo "yt-part was created, don't forget to subscribe approgramming@youtube"

# so
# ffmpeg $(youtube-dl -g 'https://www.youtube.com/watch?v=$arg1' |
#   sed 's/^/-ss $arg2 -i /') -t $arg3 -c copy out.mkv

# so lg
youtube-dl -x --postprocessor-args "-ss $arg2.30 -t $arg3.00" $arg1

echo `youtube-dl -x --postprocessor-args "-ss $arg2.30 -t $arg3.00" $arg1`
