cat * | grep -i "bomber" | grep -i "ol" | grep -v "name" | grep "-" | awk {'print $3'}
