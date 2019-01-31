automat: 
	cc  main/board.c main/simulator.c main/pngx.c main/main.c -o ../bin/AutomatKomorkowyLIFE -lpng

simulation_test: 
	cc  main/board.c main/simulator.c test/simulation_test.c -o ../bin/simulation_test

board_test:
	cc  main/board.c test/board_test.c -o ../bin/board_test

png_test:
	cc  -ggdb test/png_test.c main/pngx.c main/board.c -o ../bin/png_test -lpng

