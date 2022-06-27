#!/bin/bash
gcc -c liball.a *.o
ar rc liball.a *.o
ranlib liball.a
