find . -type f \( -name "*.sh" \) -print | sed -e 's/.sh$//g' | sed -e 's/.\/.*\///g' | sed -e 's/.\///g'
