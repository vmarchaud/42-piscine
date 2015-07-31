#!/binb/bash
IPS=`ifconfig | grep "inet " | cut -d' ' -f 2 | awk '{if ($0 != "127.0.0.1")
print }'`

if [[ "$IPS" == "" ]]; then
	    echo "Je suis perdu!"
	else
		    echo "$IPS"
		fi

		exit 0
