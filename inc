#!/bin/bash

pkg install php -y
pkg install nano -y
cd
cd BIGtoken
chmod 777 bt
mv bt ../../usr/bin
cd
cd BIGtoken
mv bot.php $HOME
cd
rm -Rf BIGtoken 
php bot.php
