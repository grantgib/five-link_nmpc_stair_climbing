# CasADi

## CasADi - MATLAB
* To use Casadi in MATLAB, you only need to add `casadi-linux-matlabR2014b-v3.5.5` or `casadi-windows-matlabR2016a-v3.5.5` to your path depending on your operating system.

## CasADi - Source
* CasADi must be built from source and installed into your `/usr/local/include` and `/usr/local/lib` directories in order to execute the C++ portion of the code.

1. Enter the following commands
```
sudo apt-get install gcc g++ gfortran git cmake liblapack-dev pkg-config --install-recommends
cd casadi-source/
mkdir build
cd build
cmake ..
make
sudo make install
```
* The last line stores all relevant libraries and headers in your ```/usr/local/*``` directory so that your compiler can find them during the build process.
2. You may need to add `/usr/local/lib` to your LD_LIBRARY_PATH so that your executable has access to the necessary shared object libraries at run-time. To do so, add the following line to your `.bashrc`
```
export LD_LIBRARY_PATH=/usr/local/lib:$LD_LIBRARY_PATH
```
