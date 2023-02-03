feh --bg-max "~/Pictures/wallpapers/anime_lain.jpg"
picom -b

export FONTCONFIG_PATH=/etc/fonts
hst_name=$(hostname)
systemctl start --user dunst
dwmblocks&
exec dwm
