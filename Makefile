OPT = -Wall

OBJS = main.o Control.o View.o Program.o Frequency.o BabyDoctor.o Settings.o DigitalClock.o

denas:	$(OBJS)
	g++ $(OPT) -o denas $(OBJS)

main.o:	Main.cc Control.h
	g++ $(OPT) -c Main.cc

View.o:	View.cc View.h
	g++ $(OPT) -c View.cc

Program.o:	Program.cc Program.h
	g++ $(OPT) -c Program.cc

Frequency.o:	Frequency.cc Frequency.h
	g++ $(OPT) -c Frequency.cc

BabyDoctor.o:	BabyDoctor.cc BabyDoctor.h
	g++ $(OPT) -c BabyDoctor.cc

Settings.o:	Settings.cc Settings.h
	g++ $(OPT) -c Settings.cc

DigitalClock.o:	DigitalClock.cc DigitalClock.h
	g++ $(OPT) -c DigitalClock.cc

clean:
	rm -f $(OBJS) denas
