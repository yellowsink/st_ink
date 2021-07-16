#!/bin/sh
echo '
 ██   ██                           ████████ ██████████
░██  ██                           ██░░░░░░ ░░░░░██░░░
░██ ██   ██████  █████   ██████  ░██           ░██S
░████   ░░██░░█ ██░░░██ ░░░░░░██ ░█████████    ░██E
░██░██   ░██ ░ ░███████  ███████ ░░░░░░░░██    ░██T
░██░░██  ░██   ░██░░░░  ██░░░░██        ░██    ░██U
░██ ░░██░███   ░░██████░░████████ ████████     ░██P
░░   ░░ ░░░     ░░░░░░  ░░░░░░░░ ░░░░░░░░      ░░
	Welcome to the KreaST installer, '$USER''
echo "Please enter either doas or sudo depending on which did you install. "
read root
if [ "$root" != "sudo" ] && [ "$root" != "doas" ]
then
echo "ERROR: You need to choose either doas or sudo"
exit
fi
echo "Starting installation..."
rm -rf config.h
rm -rf patches.h
$root make clean install 2> /dev/null
echo "KreaST installation done! Do you want me to add a .desktop file (Recommended for DE/rofi drun users) (y/n)"
read yorn
if [ "$yorn" = "y" ]; then 
    echo "Adding..."
    echo "[Desktop Entry]" > ~/.local/share/applications/st.desktop
    echo "Name=st" >> ~/.local/share/applications/st.desktop
    echo "Name[en_US]=st" >> ~/.local/share/applications/st.desktop
    echo "Exec=st" >> ~/.local/share/applications/st.desktop
    echo "Thank you for installing KreaST! Now you can use it by running 'st' on your terminal or from the app launcher. Enjoy!"
    exit 
else
	echo "Skipping..."  
exit
fi;
