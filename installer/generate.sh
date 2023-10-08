#!/bin/bash

echo $(tput setaf 1)$(tput smso)"
     _         _                      
    / \  _   _(_)_ __ ___   ___  __ _ 
   / _ \| | | | | '_ \` _ \ / _ \/ _\` |
  / ___ \ |_| | | | | | | |  __/ (_| |
 /_/   \_\__, |_|_| |_| |_|\___|\__,_|
         |___/                        

"$(tput rmso)$(tput setaf 7)
echo "Welcome to the Ayimea C++ installer creator"

echo "Enter the name of the installer:"
read project_name

echo Installer $(tput smso)$(tput setaf 6)$project_name$(tput rmso)$(tput setaf 7) will be generated

binarycreator.exe -f -c config/config.xml -p packages -v "${project_name}.exe"

echo Finished creating the installer $(tput smso)$(tput setaf 2)$project_name$(tput rmso)$(tput setaf 7) thank you Ammon great work!
read -p "Press any key man."