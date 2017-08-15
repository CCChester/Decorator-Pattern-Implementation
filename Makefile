CXX = g++-5
CXXFLAGS = -std=c++14 -Wall -MMD -Werror=vla
EXEC = a4q4
OBJECTS = main.o allcaps.o decorator.o textprocess.o dropfirst.o doublewords.o count.o echo.o
DEPENDS = ${OBJECTS:.o=.d}

${EXEC}: ${OBJECTS}
	${CXX} ${CXXFLAGS} ${OBJECTS} -o ${EXEC}

-include ${DEPENDS}

.PHONY: clean

clean:
	rm ${OBJECTS} ${EXEC} ${DEPENDS}
