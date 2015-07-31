ldapsearch -xLLL uid=$(whoami) | grep dn: | cut  -c5-
