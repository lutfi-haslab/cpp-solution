[![Open in Gitpod](https://gitpod.io/button/open-in-gitpod.svg)](https://gitpod.io/#https://github.com/critical58/cpp-gitpod-template)

# cpp-gitpod-template
To run, press the run button (shown below) in the main.cpp or follow the instructions below.

To run these commands right click in the explorer:[![Screenshot-2022-04-05-11-52-50.png](https://i.postimg.cc/gknN39gL/Screenshot-2022-04-05-11-52-50.png)](https://postimg.cc/PPnWk7sd) and press 'Open in intergrated Terminal'.

To build:
```bash
g++ main.cpp -o main
```
To run:
```bash
./main
```

## Setup Crow

Install
```bash
sudo apt-get update
sudo apt-get install -y libboost-all-dev libssl-dev zlib1g-dev
sudo apt-get install -y libasio-dev
```

```bash
cd build
cmake ..
cmake
make
```

### run server
```bash
cd build
./crow_example
```