all:	
	g++ -std=c++11 main.cpp suffixarray.h suffixarray.cpp -o project5

clean:
	/bin/rm -rf *.o project5