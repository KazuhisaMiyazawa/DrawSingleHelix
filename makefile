.PHONY: all clean
all: main.pdf

main.pdf:src/main.tex src/data.txt
	@cd src;lualatex main; cd ../; mv src/main.pdf ./
	
src/data.txt: 
	@cd src; ./../data/MAIN; cd ./../src
	
clean:
	@rm -f main.pdf src/data.txt src/main.log src/main.aux
