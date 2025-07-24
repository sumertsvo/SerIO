#!/bin/sh

# === CQtDeployer ===========================================
echo "SerIO - CQtDeployer:"
cqtdeployer -bin ~/MyWorks/SerIO/build-SerIO-Desktop_Qt_5_12_8_GCC_64bit-Release/SerIO -qmake ~/Qt5.12.8/5.12.8/gcc_64/bin/qmak -targetDir ~/SerIO -binOut ./

# === Addition folders and files ============================
echo "SerIO - addition folders and files:"
if [ -d $HOME/SerIO ]; then cp -a $HOME/MyWorks/SerIO/Deployment-Linux/SerIO-AddFoldersFiles/. $HOME/SerIO/; fi
