OPT = -Wall

OBJS = main.o Control.o View.o Program.o Electrode.o Frequency.o BabyDoctor.o Settings.o Timer.o Alarm.o

denas:	$(OBJS)
	g++ $(OPT) -o denas $(OBJS)

main.o:	Main.cc Control.h
	g++ $(OPT) -c Main.cc

Control.o:	Control.cc Control.h
	g++ $(OPT) -c	Control.cc

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

Timer.o:	Timer.cc Timer.h
	g++ $(OPT) -c Timer.cc

Electrode.o:	Electrode.h Electrode.cc
	g++ $(OPT) -c Electrode.cc

Alarm.o:	Alarm.cc Alarm.h
	g++ $(OPT) -c Alarm.cc

clean:
	rm -f $(OBJS) denas
