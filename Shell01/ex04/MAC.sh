ifconfig  | grep -o -E '([[:xdigit:]]{1,2}:){5}[[:xdigit:]]{1,2}' | sed 's/0:0:0:0:0:0//' | sed '/^[[:space:]]*$/d'
