CC = g++ -std=c++11 -g
exe_file = driver

$(exe_file): driver.o shopcart.o
	$(CC) driver.o shopcart.o -o $(exe_file)

driver.o: driver.cpp
	$(CC) -c -g driver.cpp
shopcart.o: shopcart.cpp
	$(CC) -c -g shopcart.cpp


clean:
	rm -f *.out *.o $(exe_file)
