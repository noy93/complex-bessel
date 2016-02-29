# Introduction #
Since the library uses `automake` to generate a custom Makefile, the
user must have, along with basic build tools, it installed on their
system. `*`NIX systems usually come pre-installed with those packages.

The user should then run
```sh
bash autogen.sh```
which uses the configure.ac file to generate a configure script. Then,
running
```sh
./configure && make && sudo make install```
should do the trick.

The library is installed to `/usr/local/lib` by default, so make sure
that your compiler looks for libraries in that folder.

# Instructions for specific operating systems #
## Ubuntu ##

This procedure was tested on Ubuntu 10.04 and 12.04. The first line
ensures that the build environment is setup properly. The last line
ensures the linker finds the shared object library. It might or might
not be necessary to run `ldconfig`, but in any case it should not break
your system.
```sh

sudo apt-get install gfortran g++ automake build-essential libtool
bash autogen.sh
./configure && make && sudo make install
sudo ldconfig```
On some older Ubuntu versions, the following error message can popup
while running `autogen.sh`
```

configure.ac: error: possibly undefined macro: AM_PROG_AR```
In that case, the following line can be commented out in `configure.ac`
```

AM_PROG_AR```