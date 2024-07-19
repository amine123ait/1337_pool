ifconfig | grep "ether" | grep -v "media" | awk '{ print $2 }'
