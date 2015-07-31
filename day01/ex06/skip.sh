#/bin/sh
ls -l | awk '{if(NR % 2)print}'
