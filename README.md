## Installation
### Install packages
```bash
sudo apt update
sudo apt install linux-headers-$(uname -r)
sudo apt install linux-headers-amd64 build-essential
```

## Build
```bash
make
```

## Install module
### Install
```bash
sudo insmod ldd.ko
```

### View log
```bash
sudo dmesg
```

### Uninstall
```bash
sudo rmmod ldd
```
