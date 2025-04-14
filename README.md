Install QT:
```
sudo apt install qtbase5-dev
```

Build the app:
```
mkdir build
cd build
cmake ..
make
./AdderApp
```

Parasoft Build Settings Options:
```
- Compiler Options = ${cpptest:original_options} -DPARASOFT_CPPTEST -std=c++14 -DCPPTEST_INIT_QT=1 -DCPPTEST_INIT_QT_CONSOLE=1 -I/usr/include/x86_64-linux-gnu/qt5 -I/usr/include/x86_64-linux-gnu/qt5/QtWidgets -I/usr/include/x86_64-linux-gnu/qt5/QtGui -I/usr/include/x86_64-linux-gnu/qt5/QtCore
- Linker Options = ${cpptest:original_options} -lQt5Widgets -lQt5Gui -lQt5Core
```
