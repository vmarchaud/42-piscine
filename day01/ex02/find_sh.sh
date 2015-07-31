#/bin/sh
find . -type f -name "*.sh" -print | rev | cut  -c4- | cut -d "/" -f1 | rev
