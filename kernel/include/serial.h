#ifndef SERIAL_H
#define SERIAL_H

int init_serial();
int serial_received();
char read_serial();
int is_transmit_empty();
void write_serial(char a);

#endif