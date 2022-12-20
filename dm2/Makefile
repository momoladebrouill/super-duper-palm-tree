make:
	clear
	pdflatex -output-directory=random -shell-escape dm2.tex

compile:
	gcc jarvis.c -o jarvis -Wall
	./jarvis

clear:
	rm random/*
	rm jarvis
