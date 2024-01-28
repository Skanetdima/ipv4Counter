dir = output

${dir}/main: ${dir}/main.o ${dir}/calculate.o ${dir}/binCount.o 
	g++ -std=c++17 -O3 $^ -o $@ 

${dir}/calculate.o: calculate.cpp
	g++ -c -std=c++17 -O3 $^ -o $@ 

${dir}/main.o: main.cpp
	g++ -c -std=c++17 -O3 $^ -o $@

${dir}/binCount.o: binCount.cpp
	g++ -c -std=c++17 -O3 $^ -o $@
