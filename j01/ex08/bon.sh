ldapsearch -xLLL sn='*bon*' | grep 'sn:' | wc -l | tr -d ' '
