dir = output
flags = -std=c++17 -O3
${dir}/main: ${dir}/main.o ${dir}/calculate.o ${dir}/binCount.o ${dir}/decCount.o
	g++ ${flags} $^ -o $@ 

${dir}/calculate.o: calculate.cpp
	g++ -c ${flags} $^ -o $@ 

${dir}/main.o: main.cpp
	g++ -c ${flags} $^ -o $@

${dir}/binCount.o: binCount.cpp
	g++ -c ${flags} $^ -o $@

${dir}/decCount.o: decCount.cpp
	g++ -c ${flags} $^ -o $@
