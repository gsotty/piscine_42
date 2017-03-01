cat /etc/passwd | grep -v '^#' | awk '{if(!(NR%2))print $0}' | cut -d "*" -f 1 | rev | sort -r | sed "s/:/ /g" | sed -n "$FT_LINE1","$FT_LINE2"p | tr "\n" "," | sed "s/,$/./" | tr -d '\n'
