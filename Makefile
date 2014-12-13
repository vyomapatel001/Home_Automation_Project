CC = gcc
CFLAGS = -Iinclude

all: home_automation

home_automation: src/main.c src/sensors.c src/controller.c
	$(CC) $(CFLAGS) -o home_automation src/main.c src/sensors.c src/controller.c

clean:
	rm -f home_automation
