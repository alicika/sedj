cat /etc/passwd | grep -v '^\s*#' | awk '!(NR%2)' | cut -f 1 -d : | rev | sort -r | awk 'ENVIRON["FT_LINE1"] <= NR && NR <= ENVIRON["FT_LINE2"]' | tr '\n' ',' | sed 's/,/, /g'| sed 's/, $//' | tr -d '\n'
