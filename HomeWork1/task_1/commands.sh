wc -l data.dat
grep -E "dolor|dalor" data.dat | wc -l
wc -w data.dat
grep -oE '\bmol[[:alnum:]_]*' data.dat | wc -l
