feh --bg-max /home/sairaj/Pictures/wallpapers/masushi.png
picom -b

export FONTCONFIG_PATH=/etc/fonts
hst_name=$(hostname)
systemctl start --user dunst
dwmblocks&
exec dwm
