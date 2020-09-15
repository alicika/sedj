ifconfig | sed -e 's/\	//g' | grep "ether" | sed s/ether//g | tr -d \ 
