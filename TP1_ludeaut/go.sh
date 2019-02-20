make clean
make
for i in 1 2 3
do ./tests/test$i
done
